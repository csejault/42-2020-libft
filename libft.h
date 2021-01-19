/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 19:54:42 by csejault          #+#    #+#             */
/*   Updated: 2021/01/19 17:17:01 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct	s_gnl
{
	int			retreadf;
	char		*cache;
}				t_gnl;

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list			*ftus_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ftus_lstmap
				(t_list *lst, void*(*f)(void *), void(*del)(void *));
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_bzero(void *s, size_t n);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr(char *s);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ftus_calloc(size_t nmemb, size_t size);
char			*ftus_substr(char const *s, unsigned int start, size_t len);
char			*ftus_strjoin(char const *s1, char const *s2);
char			*ftus_strj_free(char *s1, char *s2);
char			*ftus_strj_fr_1(char *s1, char const *s2);
char			*ftus_strj_fr_2(char const *s1, char *s2);
char			*ftus_strtrim(char const *s1, char const *set);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ftus_strdup(const char *s);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ftus_itoa(int n);
char			*ftus_utoa(unsigned int n);
char			*ftus_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ftus_utoabase(unsigned int toconv, char *baseto);
char			*ftus_ptohexa(unsigned long nbr);
char			**ftus_split(char const *s, char c);
char			**ftus_up_split(int *words, char const *s, char c);
int				ft_lstsize(t_list *lst);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_str_is_nbr(char *str);
int				ftus_gnl(int fd, char **line);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_atoi(const char *nptr);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
#endif
