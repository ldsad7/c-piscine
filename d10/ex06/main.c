/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 21:46:01 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/04 22:25:04 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_add(int x, int y);
int		ft_sub(int x, int y);
int		ft_mul(int x, int y);
int		ft_div(int x, int y);
int		ft_mod(int x, int y);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);

long	ft_atoi(char *str)
{
	int		sign;
	long	result;

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
	return (result * sign);
}

int		gt_i(char **argv)
{
	int		i;
	int		index;
	char	*str[5];

	str[0] = "+";
	str[1] = "-";
	str[2] = "*";
	str[3] = "/";
	str[4] = "%";
	i = 0;
	index = -1;
	while (i < 5)
	{
		if (ft_strcmp(argv[2], str[i]) == 0)
			index = i;
		++i;
	}
	return (index);
}

int		ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int (*f[5])(int, int);

	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	if (argc == 4)
	{
		if (ft_strcmp(argv[2], "+") != 0 && ft_strcmp(argv[2], "-") != 0
				&& ft_strcmp(argv[2], "*") != 0 && ft_strcmp(argv[2], "/") != 0
				&& ft_strcmp(argv[2], "%") != 0)
			write(1, "0\n", 2);
		else if (!ft_strcmp(argv[2], "/") && !ft_atoi(argv[3]))
			write(1, "Stop : divizion by zero\n", 24);
		else if (!ft_strcmp(argv[2], "%") && ft_atoi(argv[3]) == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else
		{
			ft_putnbr(f[gt_i(argv)](ft_atoi(argv[1]), ft_atoi(argv[3])));
			write(1, "\n", 1);
		}
	}
	return (0);
}
