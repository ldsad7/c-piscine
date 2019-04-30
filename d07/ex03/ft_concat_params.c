/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 23:46:27 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 16:53:07 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*func(int argc, char **argv, int len)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = (char *)malloc(sizeof(*str) * (len + 1));
	j = 1;
	i = -1;
	while (++i < len)
	{
		k = argc - argc;
		while (k < ft_strlen(argv[j]))
			str[i++] = argv[j][k++];
		++j;
		if (i < len - 1)
			str[i] = '\n';
	}
	str[i] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int	j;
	int	len;

	j = 1;
	len = 0;
	while (j < argc)
		len += ft_strlen(argv[j++]);
	len += (argc - 2) * (argc > 1);
	return (func(argc, argv, len));
}
