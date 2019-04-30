/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 21:44:18 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/04 21:58:01 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int mod;
	int div;

	mod = nb % 10;
	if (mod < 0)
		mod = (-1) * mod;
	div = nb / 10;
	if (div != 0)
	{
		ft_putnbr(nb / 10);
		ft_putchar(mod + '0');
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
		}
		ft_putchar(mod + '0');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
