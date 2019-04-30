/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:49:27 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 13:01:34 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (tab[j] <= tab[j - 1])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
			j = j - 1;
		}
		i = i + 1;
	}
}

int		ft_unmatch(int *tab, int length)
{
	int	i;

	i = 0;
	ft_sort_integer_table(tab, length);
	while (i < length - 1)
		if (tab[i] == tab[i + 1])
			i += 2;
		else
			return (tab[i]);
	return (tab[i]);
}
