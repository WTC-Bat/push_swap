/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 11:00:25 by mvanwyk           #+#    #+#             */
/*   Updated: 2016/06/14 14:26:35 by mvanwyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "ft_printf/includes/ft_printf.h"

# define BUFF_SIZE 32

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char	*ft_appendc(char *str, int c);
char	*ft_itoa(int n);
char	*ft_itobase(int n, int base);
char	*ft_prependc(char *str, int c);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strlower(char const *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, char *src, int nb);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(char *big, char *little, size_t len);
char	*ft_strrchr(char *s, int c);
char	*ft_strrev(char const *str);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
char	*ft_strupper(char const *str);
char	ft_tolower(char c);
char	ft_toupper(char c);
int		ft_atoi(char *str);
int		ft_endswith(char *str, char *end);
int		ft_indexof(char const *str, char c);
int		ft_lindexof(char const *str, char c);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_islower(char c);
int		ft_isnegative(int n);
int		ft_isupper(char c);
int		ft_isprint(char c);
int		ft_memcmp(void *s1, void *s2, size_t n);
int		ft_startswith(char *str, char *start);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcmp_low(char *s1, char *s2);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strncmp(char const *s1, char const*s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		get_next_line(const int fd, char **line);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlen(char const *str);
size_t	ft_wcslen(const wchar_t *wcs);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, void const *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dst, void *src, size_t len);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar(char const c);
void	ft_putchar_fd(char const c, int fd);
void	ft_putendl(char const *str);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_endl(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
