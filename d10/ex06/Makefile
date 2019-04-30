# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 16:59:53 by tsimonis          #+#    #+#              #
#    Updated: 2018/09/04 22:37:52 by tsimonis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = do-op
SRC = ft_opers.c main.c funcs.c

all: $(NAME)

$(NAME): $(SRC) $(INCS)
	$(CC) -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all
