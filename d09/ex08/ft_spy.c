/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 01:27:43 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 02:26:46 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	word(char *str, char *str1)
{
	int		j;
	int		k;

	j = 0;
	while (str[j] == ' ')
	{
		++j;
	}
	k = 0;
	while ((str1[k] == str[j] || str1[k] == str[j] + 32) && str1[k] != '\0')
	{
		++k;
		++j;
	}
	if (str1[k] != '\0')
		return (0);
	else
	{
		while (str[j] != '\0')
		{
			if (str[j++] != ' ')
				return (0);
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fl;
	int		i;

	i = 1;
	fl = 0;
	while (i < argc && fl == 0)
	{
		if (word(argv[i], "president") || word(argv[i], "attack")
				|| word(argv[i], "bauer"))
			fl = 1;
		++i;
	}
	if (fl == 1)
		write(1, "Alert!!!", 8);
	return (0);
}
