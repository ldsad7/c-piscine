/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 00:34:42 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 18:48:49 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int		eval_expr2(char **str, int fl)
{
	int		num;
	char	oper;

	num = ft_atoi(str) * fl;
	while ((*str)[0] != '\0' && (*str)[0] != ')')
	{
		while ((*str)[0] != '+' && (*str)[0] != '-' && (*str)[0] != '/' &&
(*str)[0] != '*' && (*str)[0] != '%' && (*str)[0] != '\0' && (*str)[0] != ')')
			(*str)++;
		oper = (*str)[0];
		*str = (*str) + ((*str)[0] != '\0');
		if (oper == '+')
			return (num + eval_expr2(str, 1));
		else if (oper == '-')
			return (num + eval_expr2(str, -1));
		else if (oper == '/')
			num /= ft_atoi(str);
		else if (oper == '*')
			num *= ft_atoi(str);
		else if (oper == '%')
			num %= ft_atoi(str);
	}
	*str = *str + ((*str)[0] == ')');
	return (num);
}

int		eval_expr(char *str)
{
	return (eval_expr2(&str, 1));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
