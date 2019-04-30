/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 15:34:34 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/26 15:42:16 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line_printing(int x)
{
	int i;

	ft_putchar('/');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('*');
		i = i + 1;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	last_line_printing(int x)
{
	int i;

	ft_putchar('\\');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('*');
		i = i + 1;
	}
	if (x > 1)
	{
		ft_putchar('/');
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
		ft_putchar('*');
		i = 1;
		while (i < x - 1)
		{
			ft_putchar(' ');
			i = i + 1;
		}
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		j = j + 1;
	}
	if (y > 1)
	{
		last_line_printing(x);
	}
}
