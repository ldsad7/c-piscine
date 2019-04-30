# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/08 20:46:23 by tsimonis          #+#    #+#              #
#    Updated: 2018/09/09 05:01:06 by tsimonis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = colle-2
FLAGS = -Wall -Wextra -Werror
SRCS1 = main.c rush00.c ft_putnbr.c ft_putchar.c
SRCS2 = ft_atoi.c ft_putchar.c
SRCS3 = colle-00.c colle-01.c colle-02.c colle-03.c colle-04.c
OBJS1 = main.o rush00.o ft_putnbr.o ft_putchar.o
OBJS2 = ft_atoi.o ft_putchar.o
OBJS3 = colle-00.o colle-01.o colle-02.o colle-03.o colle-04.o
EXE = colle-00 colle-01 colle-02 colle-03 colle-04

all: $(NAME)

$(NAME): fclean $(SRCS1) $(SRCS2)
	$(CC) $(FLAGS) -c $(SRCS1)
	$(CC) $(FLAGS) $(OBJS1) -o $(NAME)
	$(CC) $(FLAGS) -c $(SRCS2) $(SRCS3)
	$(CC) $(FLAGS) $(OBJS2) colle-00.o -o colle-00
	$(CC) $(FLAGS) $(OBJS2) colle-01.o -o colle-01
	$(CC) $(FLAGS) $(OBJS2) colle-02.o -o colle-02
	$(CC) $(FLAGS) $(OBJS2) colle-03.o -o colle-03
	$(CC) $(FLAGS) $(OBJS2) colle-04.o -o colle-04

clean:
	rm -f $(OBJS1) $(OBJS2) $(OBJS3)

fclean: clean
	rm -f $(NAME) $(EXE)

re: fclean all
