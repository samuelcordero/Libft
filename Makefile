# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sacorder <sacorder@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 18:04:20 by sacorder          #+#    #+#              #
#    Updated: 2023/03/14 15:56:55 by sacorder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
NAME = libft.a
BONUSNAME = libft_bonus.a
FLAGS = -Wall -Wextra -Werror
SRC = libft.h *.c
SRCBONUS = libft_bonus.h *.c
OBJ := *.o
all = $(NAME)
RM=/bin/rm -f
all :$(NAME)
$(NAME) :$(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
bonus:
	$(CC) $(FLAGS) -c $(SRCBONUS)
	ar -rc $(NAME) $(OBJ)
clean:
	$(RM) *.o
fclean: clean
	$(RM) $(NAME)
	$(RM) $(BONUSNAME)
re: fclean all
.PHONY: all clean fclean re bonus
