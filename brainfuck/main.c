/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 02:08:59 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/13 04:01:04 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char **str)
{
	while (str != '\0')
	{
		if (str == '>')
			str++;
		else if (str == '<')
			str--;
		else if (str == '+')
			(*str)++;
		else if (str == '-')
			(*str)--;
		else if (str == '.')
			write(1, &(*str), 1);
		else if (str == '[')
		{
			if (*str == 0)
			{
				str++;
				brainfuck(&str);
			}
		}
		else if (str == ']')
		{
			if (*str != 0)
			{
				str--;
				brainfuck(&str);
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		brainfuck(&(argv[1]));
	write(1, "\n", 1);
	return (0);
}
