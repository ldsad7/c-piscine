/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:33:20 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/06 21:39:42 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int				ft_atoi(char *str)
{
	int		sign;
	int		result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (sign * result);
}

int				check_if_plus(char *str)
{
	int		sign;
	int		fl;
	int		result;

	sign = 1;
	result = 0;
	fl = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	fl = (*str == '+');
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (fl);
}

int				ft_lenstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
