/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:30:21 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/25 23:40:49 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printing(char cs[8])
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar(cs[i] + '0');
		i = i + 1;
	}
	ft_putchar('\n');
}

void	recursive_function(char cs[8], int n, int j)
{
	int k;
	int fl;

	if (n == 8)
	{
		printing(cs);
	}
	while (j++ <= 8 && n < 8)
	{
		k = 0;
		fl = 0;
		while (k < n)
		{
			if (cs[k] == j || (j - cs[k]) == (n - k) || (j - cs[k]) == (k - n))
			{
				fl = 1;
			}
			k = k + 1;
		}
		if (fl == 0)
		{
			cs[n] = j;
			recursive_function(cs, n + 1, fl + 1);
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	char	columns[8];
	int		n;
	int		j;

	j = 0;
	n = 0;
	recursive_function(columns, n, j);
}
