SRC     = ft_atoi.c ft_lstsize.c ft_strchr.c ftus_lstnew.c ft_bzero.c ft_memccpy.c ft_strlcat.c ftus_ptohexa.c ft_isalnum.c ft_memchr.c ft_strlcpy.c ftus_up_split.c ftus_split.c ft_isalpha.c ft_memcmp.c ft_strlen.c ftus_strdup.c ft_isascii.c ft_memcpy.c ft_strcmp.c ft_strncmp.c ftus_strjoin.c ftus_strj_free.c ftus_strj_fr_1.c ftus_strj_fr_2.c ft_isdigit.c ft_str_is_nbr.c ft_memmove.c ft_strnstr.c ftus_strmapi.c ft_isprint.c ft_memset.c ft_strrchr.c ftus_strtrim.c ft_lstadd_back.c ft_putchar.c ft_tolower.c ftus_substr.c ft_lstadd_front.c ft_putchar_fd.c ft_toupper.c ftus_utoabase.c ft_lstclear.c ft_putendl_fd.c ftus_calloc.c ftus_utoa.c ft_lstdelone.c ft_putnbr_fd.c ftus_gnl.c ft_lstiter.c ft_putstr.c ftus_itoa.c ft_lstlast.c ft_putstr_fd.c ftus_lstmap.c
OBJ		= $(SRC:.c=.o)
NAME		= libft.a
FLAGS		= -Wall -Wextra -Werror
CC		= clang
RM		= rm -f

.c.o:		
		$(CC) $(FLAGS) -c $< -o $(<:.c=.o)


all:		$(NAME) 

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
