/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 03:21:53 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/02 04:17:23 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	printing(char **square)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	c = ' ';
	while (i < 9)
	{
		while (j < 8)
		{
			write(1, &square[i][j++], 1);
			write(1, &c, 1);
		}
		write(1, &square[i][j], 1);
		c = '\n';
		write(1, &c, 1);
		j = 0;
		c = ' ';
		++i;
	}
}

void	copying(char **square, char **correct_solution)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			correct_solution[i][j] = square[i][j];
			j++;
		}
		i++;
		j = 0;
	}
}

int		check(int i, int j, int digit, char **square)
{
	int	t;
	int	t1;
	int	fl;
	int	i1;
	int	j1;

	t = 0;
	while (square[i][t] != '\0' && square[i][t] != digit + '0')
		t++;
	fl = 1 * (square[i][t] == '\0');
	t = 0;
	while (square[t][j] != '\0' && fl == 1 && square[t][j] != digit + '0')
		++t;
	fl = fl * (square[t][j] == '\0');
	t = 0;
	i1 = i - (i % 3);
	j1 = j - (j % 3);
	while (fl == 1 && t++ <= 2)
	{
		t1 = 0;
		while (fl == 1 && t1++ <= 2 && square[i1][j1] != digit + '0')
			j1 = j - (j % 3) + ((j1 + 1) % 3);
		fl = fl * (t1 == 4);
		i1 = i - (i % 3) + ((i1 + 1) % 3);
	}
	return (fl);
}

int		find_answer_call(char **square, int i, int j, char **correct_solution);

int		find_answer(char **square, int i, int j, char **correct_solution)
{
	int	digit;
	int	result;

	digit = 1;
	result = 0;
	if (i == 9 && j == 0)
	{
		if (correct_solution[0][0] == 0)
			copying(square, correct_solution);
		return (1);
	}
	if (square[i][j] == '.')
	{
		while (digit <= 9)
		{
			if (check(i, j, digit, square))
			{
				square[i][j] = digit + '0';
				result = find_answer_call(square, i, j, correct_solution);
			}
			square[i][j] = '.';
			digit++;
		}
	}
	else
		result = find_answer_call(square, i, j, correct_solution);
	return (result);
}

int		find_answer_call(char **square, int i, int j, char **correct_solution)
{
	int	result;

	result = 0;
	if (j == 8)
		result += find_answer(square, i + 1, 0, correct_solution);
	else
		result += find_answer(square, i, j + 1, correct_solution);
	return (result);
}

char	**square_allocation(void)
{
	int		i;
	char	**square;
	
	square = (char **)malloc(sizeof(*square) * 10);
	i = 0;
	while (i < 10)
		square[i++] = (char *)malloc(sizeof(**square) * 10);
	return (square);
}

void	square_filling(char **square, int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (j < 9)
		{
			square[i - 1][j] = argv[i][j];
			++j;
		}
		square[i-1][j] = '\0';
		++i;
		j = 0;
	}
	j = 0;
	while (j < 9)
	{
		square[i - 1][j] = '\0';
		++j;
	}
}

int		main(int argc, char **argv)
{
	char	**square;
	char	**correct_solution;
	int	 result;
	
	result = 0;
	square = square_allocation();
	correct_solution = square_allocation();
	correct_solution[0][0] = 0;
	square_filling(square, argc, argv);
	result = find_answer(square, 0, 0, correct_solution);
	if (result == 1)
		printing(correct_solution);
	else
		write(1, "Error\n", 6);
	return (0);
}
