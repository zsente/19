# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoesente <zoesente@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 16:40:33 by zoesente          #+#    #+#              #
#    Updated: 2022/11/28 21:11:43 by zoesente         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strnstr.c ft_strlcat.c

OBJ 		= $(SRC:.c=.o)

CC			= gcc
RM			= rm -f
CFLAGS 		= -Wall -Werror -Wextra 

NAME		= libft.a 

all:		$(NAME)

$(NAME):	$(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)
clean:
				$(RM) $(OBJ)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
