CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -g3 -MMD
LIBFLAGS = -L./libft/ -lft
MLXFLAGS = -Lmlx -lmlx -lm -lX11 -lXext -lXrandr -lXi
MLXLIB = mlx/libmlx_Linux.a

SRC = main.c \
	src/parsing/parsing.c \
	src/parsing/parse_map.c \
	src/parsing/check_walls.c \
	src/parsing/parsing_utils.c \
	src/parsing/parse_content.c \
	src/parsing/read_file.c	\
	src/parsing/free_parsing.c \
	src/parsing/parse_doors.c \
	src/exec/free.c \
	src/exec/ft_mlx_event.c \
	src/exec/init_textures.c \
	src/exec/ft_draw_line.c \
	src/exec/moves.c \
	src/exec/moves_01.c \
	src/exec/animations.c \
	src/exec/collision.c \
	src/exec/refresh_frame.c \
	src/exec/utils.c \
	src/exec/init.c \
	src/exec/init_01.c \
	src/exec/init_02.c \
	src/exec/minimap_render.c \
	src/exec/minimap_render_01.c \
	src/exec/raycast.c \
	src/exec/raycast_doors.c \
	src/exec/time_utils.c \
	src/exec/graphic_utils.c \
	src/exec/raycast_sprite.c \
	src/exec/raycast_wall.c \
	src/exec/sort_elements.c \

OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
DEP = $(OBJ:.o=.d)

LIBFT_PATH = ./libft/
LIBFT = $(LIBFT_PATH)libft.a

NAME = cub3D
NAME_BONUS = cub3D_bonus
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(MLXLIB):
	make -j4 -C mlx

$(NAME): $(OBJ) $(MLXLIB) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLXFLAGS) $(MLXLIB) $(LIBFLAGS)

$(LIBFT):
	$(MAKE) -j4 -C $(LIBFT_PATH) all bonus

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJ) $(MLXLIB) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ) $(MLXFLAGS) $(MLXLIB) $(LIBFLAGS)

-include $(DEP)

clean:
	rm -rf $(OBJ_DIR)
	make -C mlx clean
	make -C $(LIBFT_PATH) fclean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
