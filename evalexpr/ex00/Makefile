# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 20:46:23 by tsimonis          #+#    #+#              #
#    Updated: 2018/09/08 22:48:59 by tsimonis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = eval_expr
FLAGS = -Wall -Wextra -Werror
SRCS = eval_expr.c ft_atoi.c ft_putnbr.c
OBJS = eval_expr.o ft_atoi.o ft_putnbr.o

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -c $(SRCS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
