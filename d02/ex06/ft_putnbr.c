/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 18:29:08 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/23 23:02:21 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int mod;
	int div;

	mod = nb % 10;
	if (mod < 0)
	{
		mod = (-1) * mod;
	}
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
