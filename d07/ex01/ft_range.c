/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:24:04 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/29 22:36:54 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	fl;

	arr = (int *)malloc(sizeof(*arr) * (max - min + 1));
	i = 0;
	fl = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
		fl = 1;
	}
	if (fl == 1)
		return (arr);
	else
		return (0);
}
