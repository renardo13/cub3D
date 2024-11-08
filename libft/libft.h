/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albestae <albestae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:15:04 by melmarti          #+#    #+#             */
/*   Updated: 2024/10/21 07:01:27 by albestae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *s);
long long	ft_atoll(const char *s);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_str_isdigit(char *s);
int			ft_isprint(int c);
int			ft_count_tab(char **tab);
int			ft_is_char(char *s, char c);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *string1, const void *string2, size_t n);
void		*ft_memcpy(void *dest, const void *s, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memset(void *p, int value, size_t count);
int			ft_strchr(const char *s, int c);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t n);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
int			ft_strrchr(char *s, int c);
char		*ft_strcat(char *a, char *b);
char		**ft_strdup_array(char **cmd);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		*ft_strdup(const char *src);
char		*ft_strndup(char *src, int n);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_free(char *s1, const char *s2);
char		**ft_jointab(char **t1, char **t2);
char		*ft_strjoin_path(const char *s1, const char *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char *s, char *c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
int			ft_put_hexa(unsigned int nbr);
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_free_split(char **s, int i);

#endif