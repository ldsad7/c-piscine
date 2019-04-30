/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 01:20:38 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 23:08:26 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "funcs.h"

void	add(int i, int row, int cols)
{
	write(1, "[rush-0", 7);
	ft_putnbr(i);
	write(1, "] [", 3);
	ft_putnbr(row);
	write(1, "] [", 3);
	ft_putnbr(cols);
	write(1, "]", 1);
}

void	printing(int row, int cols, int fl1)
{
	if (fl1 == 5 || fl1 == 6)
	{
		add(2, row, cols);
		write (1, " || ", 4);
	}
	if (fl1 == 5 || fl1 == 6 || fl1 == 7)
		add(3, row, cols);
	if (fl1 == 5 || fl1 == 7)
	{
		write (1, " || ", 4);
		add(4, row, cols);
	}
	if (fl1 >= 0 && fl1 <= 4)
		add(fl1, row, cols);
	write(1, '\n', 1);
}

int		error(void)
{
	write(1, "aucune\n", 7);
	return (0);
}

int		check(fl1, cols, i, prev)
{
	int		row;
	int		col;

	row = i / cols;
	if ((fl1 == 0 && prev == rush0(cols, row + 1, i)) || (fl1 == 1 &&
	prev == rush1(cols, row + 1, i)) || (fl1 == 2 && prev ==
	rush2(cols, row + 1, i)) || (fl1 == 3 && prev == rush3(cols, row + 1, i))
	|| (fl1 == 4 && prev == rush4(cols, row + 1, i)))
		return (fl1);
	else if (fl1 >= 5)
	{
		i = (prev == rush2(cols, row + 1, i)); 
		j = (prev == rush3(cols, row + 1, i));
		k = (prev == rush4(cols, row + 1, i));
		if (i && j && k)
			return (5);
		else if (i && j && !k)
			return (6);
		else if (j && k && !i)
			return (7);
		else if (i && !j && !k)
			return (2);
		else if (j && !i && !k)
			return (3);
		else if (k && !i && !j)
			return (4);
		else
			return (-1);
	}
	return (-1);
}

int		main(void)
{
	int		ret;
	int		cols;
	int		row;
	int		fl1;
	int		fl2;
	int		i;
	char	buf[BUF_SIZE];
	char	prev;

	fl1 = -1;
	ret = read(0, buf, BUF_SIZE);
	if (ret)
	{
		if (buf[0] == 'o' || buf[0] == '/' || buf[0] == 'A')
			fl1 = 1 * (buf[0] == '/') + 5 * (buf[0] == 'A');
		else
			return (error());
	}
	else
	{
		write(1, "[rush-00] [0] [0] || [rush-01] [0] [0] || [rush-02] [0] [0]",
				59);
		write(1, " || [rush-03] [0] [0] || [rush-04] [0] [0]\n", 43);
		return (0);
	}
	while ((ret = read(0, buf, BUF_SIZE)) && buf[0] != '\n')
	row = 0;
	cols = 1;
	if (!(ret = read(0, buf, BUF_SIZE)))
		return (error());
	prev = buf[0];
	fl2 = 0;
	i = 1;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (fl2 == 0)
			cols++;
		if (prev == '\n')
		{
			fl2 = 1;
			row++;
		}
		fl1 = check(fl1, cols, i, prev);
		if (fl1 != -1)
			return (error());
		prev = buf[0];
		i++;
	}
	if (prev == '\n')
		printing(row + 1, cols - 1, fl1);
	return (0);
}
