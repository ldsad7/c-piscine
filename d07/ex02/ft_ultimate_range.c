/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 22:43:13 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/29 23:39:58 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	fl;

	*range = (int *)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	fl = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
		fl = 1;
	}
	if (fl == 1)
		return (max - min);
	else
		return (0);
}
