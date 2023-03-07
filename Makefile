# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 18:04:20 by sacorder          #+#    #+#              #
#    Updated: 2023/03/07 15:44:34 by sacorder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = libft.h *.c
OBJ = main.o file_utils.o matrix_utils.o
all = $(NAME)
RM=/bin/rm -f
$(NAME) :$(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean:
	$(RM) $(NAME)
