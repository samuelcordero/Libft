# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 18:04:20 by sacorder          #+#    #+#              #
#    Updated: 2023/03/09 16:31:55 by sacorder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = libft.h *.c
OBJ := *.o
all = $(NAME)
RM=/bin/rm -f
all :$(NAME)
$(NAME) :$(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
