/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:38:38 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 20:10:34 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

long long int	get_number2(char **str, int fl1, int fl2)
{
	long long int	t1;
	long long int	result;

	t1 = 922337203685477580 * (-1);
	result = ((*str)[0] - '0') * fl1;
	(*str)++;
	while ((*str)[0] >= '0' && (*str)[0] <= '9')
	{
		if (result < t1 || (result == t1 && (*str)[0] == '9'))
		{
			result = 0;
			fl2 = 1;
		}
		else if (result > t1 * (-1) || (result == t1 * (-1)
					&& (*str)[0] == '9'))
		{
			result = -1;
			fl2 = 1;
		}
		if (fl2 == 0)
			result = 10 * result + ((*str)[0] - '0') * fl1;
		(*str)++;
	}
	return (result);
}

int				get_number1(char **str, int fl1)
{
	int	result;
	int	fl2;

	result = 0;
	while ((*str)[0] == '0')
		(*str)++;
	fl2 = 0;
	if ((*str)[0] >= '1' && (*str)[0] <= '9')
		result = get_number2(str, fl1, fl2);
	return (result);
}

int				ft_atoi(char **str)
{
	int	fl1;

	fl1 = 1;
	while ((*str)[0] == ' ' || (*str)[0] == '\t' || (*str)[0] == '\n' ||
			(*str)[0] == '\f' || (*str)[0] == '\v' || (*str)[0] == '\r')
		(*str)++;
	if ((*str)[0] == '(')
	{
		(*str)++;
		return (eval_expr2(str, 1));
	}
	if ((*str)[0] == '-')
	{
		fl1 = -1;
		(*str)++;
	}
	else if ((*str)[0] == '+')
		(*str)++;
	return (get_number1(str, fl1));
}
