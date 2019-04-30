/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:53:45 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 00:54:02 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	first_line_printing(int a)
{
	int i;

	ft_putchar('A');
	i = 1;
	while (i < a - 1)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (a > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	last_line_printing(int a)
{
	int i;

	ft_putchar('C');
	i = 1;
	while (i < a - 1)
	{
		ft_putchar('B');
		i = i + 1;
	}
	if (a > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int i;
	int j;

	if (a <= 0 || b <= 0)
		return ;
	first_line_printing(a);
	j = 1;
	while (j < b - 1)
	{
		ft_putchar('B');
		i = 1;
		while (i < a - 1)
		{
			ft_putchar(' ');
			i = i + 1;
		}
		if (a > 1)
			ft_putchar('B');
		ft_putchar('\n');
		j = j + 1;
	}
	if (b > 1)
	{
		last_line_printing(a);
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
