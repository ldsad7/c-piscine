/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 04:34:12 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/25 21:41:21 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive_function(char cs[8], int n, int *all, int j)
{
	int k;
	int fl;

	while (j <= 8 && n < 8)
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
			*all = recursive_function(cs, n + 1, all, fl + 1);
		}
		j = j + 1;
	}
	return (*all + (n == 8) * 1);
}

int	ft_eight_queens_puzzle(void)
{
	char	columns[8];
	int		n;
	int		all;
	int		j;

	j = 1;
	n = 0;
	all = 0;
	return (recursive_function(columns, n, &all, j));
}
