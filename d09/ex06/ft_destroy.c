/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:24:03 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/30 23:59:48 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimator.h>
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (factory[i] != 0)
	{
		while (factory[i][j] != 0)
		{
			free(factory[i][j]);
			++j;
		}
		free(factory[i]);
		++i;
		j = 0;
	}
	free(factory);
}
