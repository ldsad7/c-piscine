/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:43:52 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/30 00:53:09 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		k = i;
		while (str[i++] == to_find[j] && to_find[j] != '\0')
			j = j + 1;
		if (to_find[j] == '\0')
			return (str + i - 1 - j);
		else
			j = 0;
		i = k + 1;
	}
	return (0);
}
