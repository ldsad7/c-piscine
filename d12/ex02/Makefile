# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 13:39:32 by tsimonis          #+#    #+#              #
#    Updated: 2018/09/06 21:41:54 by tsimonis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME1 = ft_tail
NAME2 = ft_add
SRC = ft_tail.c ft_add.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME1) $(NAME2)

$(NAME1) $(NAME2): fclean $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(NAME1).o $(NAME2).o -o $(NAME1)

clean:
	rm -f $(NAME1).o $(NAME2).o

fclean: clean
	rm -f $(NAME1)

re: fclean all
