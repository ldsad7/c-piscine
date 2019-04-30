/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 02:31:30 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/04 22:43:18 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		while_loop(int *tab, int length, int (*f)(int, int))
{
	int		fl;
	int		i;

	fl = 0;
	i = 0;
	while (i < length - 1 && fl == 0)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			fl = 1;
	}
	return (fl);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	fl;

	fl = while_loop(tab, length, f);
	if (fl == 0)
		return (1);
	return (0);
}
