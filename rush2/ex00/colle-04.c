/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:54:38 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 00:54:51 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	first_line_printing(int x)
{
	int i;

	ft_putchar('A');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	last_line_printing(int x)
{
	int i;

	ft_putchar('C');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (x <= 0 || y <= 0)
		return ;
	first_line_printing(x);
	j = 1;
	while (j < y - 1)
	{
		ft_putchar('B');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i = i + 1;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		j = j + 1;
	}
	if (y > 1)
	{
		last_line_printing(x);
	}
}

int		main(int argc, char **argv)
{
	int	x;
	int	y;

	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (argc - argc);
}
