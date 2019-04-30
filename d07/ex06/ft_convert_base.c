/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 04:44:13 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 22:46:54 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		to_ten(char *nbr, char *base_from, int base_from_)
{
	int		i;
	int		j;
	int		result;
	int		sign;

	result = 0;
	i = 0;
	j = 0;
	sign = 1;
	if (nbr[i] == '-')
		sign = (-1) * (++i);
	else if (nbr[i] == '+')
		++i;
	while (nbr[i] != '\0' && nbr[i] != '.')
	{
		while (base_from[j] != nbr[i])
			++j;
		result *= base_from_;
		result += j;
		++i;
		j = 0;
	}
	return (sign * result);
}

char	*conversion(long int nbr_, char *base_to, int base_to_, int sign)
{
	int			len;
	char		*result;
	long	int	m;
	int			i;

	m = 1;
	len = 0 + (nbr_ == 0);
	if (sign == -1)
		nbr_ *= (-1);
	while (m <= nbr_)
	{
		++len;
		m = m * base_to_;
	}
	result = (char *)malloc(sizeof(*result) * (len + 1 + 1 * (sign == -1)));
	i = 0 + (sign == -1);
	if (sign == -1)
		result[0] = '-';
	while (i < len + 1 * (sign == -1))
	{
		m /= base_to_;
		result[i++] = base_to[(nbr_ / (m + 1 * (m == 0))) % base_to_];
	}
	result[len + 1 * (sign == -1)] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char		*result;
	int			base_from_;
	int			base_to_;
	long int	nbr_;
	int			sign;

	base_from_ = 0;
	while (base_from[base_from_] != '\0')
		base_from_++;
	base_to_ = 0;
	while (base_to[base_to_] != '\0')
		base_to_++;
	nbr_ = to_ten(nbr, base_from, base_from_);
	sign = 0;
	if (nbr_ < 0)
		sign = -1;
	result = conversion(nbr_, base_to, base_to_, sign);
	return (result);
}
