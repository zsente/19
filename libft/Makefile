# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 16:40:33 by zoesente          #+#    #+#              #
#    Updated: 2022/12/06 15:57:54 by zoesente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_bzero.c ft_calloc.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_atoi.c ft_strdup.c\
			ft_strlen.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c\
			ft_substr.c ft_strtrim.c ft_strjoin.c ft_split.c ft_itoa.c \
			ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstsize.c 

SRC_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			  ft_lstiter.c  ft_lstmap.c

OBJ 		= $(SRC:.c=.o)

OBJ_BONUS	= $(SRC_BONUS:.c=.o)

CC			= gcc
RM			= rm -f
CFLAGS 		= -Wall -Werror -Wextra 

NAME		= libft.a 

all:		$(NAME)

$(NAME):	$(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

bonus:		$(OBJ_BONUS)
				ar rc $(NAME) $(OBJ_BONUS)

clean:
				$(RM) $(OBJ) $(OBJ_BONUS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re bonus
