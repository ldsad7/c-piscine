/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:38:38 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 01:00:44 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

long long int	get_number2(char *str, int i, int fl1, int fl2)
{
	long long int	t1;
	long long int	result;

	t1 = 922337203685477580 * (-1);
	result = (str[i] - '0') * fl1;
	i = i + 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < t1 || (result == t1 && str[i] == '9'))
		{
			result = 0;
			fl2 = 1;
		}
		else if (result > t1 * (-1) || (result == t1 * (-1) && str[i] == '9'))
		{
			result = -1;
			fl2 = 1;
		}
		if (fl2 == 0)
		{
			result = 10 * result + (str[i] - '0') * fl1;
		}
		i = i + 1;
	}
	return (result);
}

int				get_number1(char *str, int i, int fl1)
{
	int	result;
	int	fl2;

	result = 0;
	while (str[i] == '0')
	{
		i = i + 1;
	}
	fl2 = 0;
	if (str[i] >= '1' && str[i] <= '9')
	{
		result = get_number2(str, i, fl1, fl2);
	}
	return (result);
}

int				ft_atoi(char *str)
{
	int	i;
	int	fl1;

	i = 0;
	fl1 = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'\
	|| str[i] == '\v' || str[i] == '\r')
	{
		i = i + 1;
	}
	if (str[i] == '-')
	{
		fl1 = -1;
		i = i + 1;
	}
	else if (str[i] == '+')
	{
		i = i + 1;
	}
	return (get_number1(str, i, fl1));
}
