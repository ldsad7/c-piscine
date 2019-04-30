# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 13:39:32 by tsimonis          #+#    #+#              #
#    Updated: 2018/09/06 16:19:54 by tsimonis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = ft_cat
SRC = ft_cat.c
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): fclean $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(NAME).o -o $(NAME)

clean:
	rm -f $(NAME).o

fclean: clean
	rm -f $(NAME)

re: fclean all
