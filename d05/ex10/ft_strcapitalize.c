/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 00:15:54 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/28 00:58:16 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while ((str[i] <= 'z' && str[i] >= 'a') || (str[i] >= '0' &&\
		str[i] <= '9') || (str[i] <= 'Z' && str[i] >= 'A'))
		{
			if (str[i] <= 'z' && str[i] >= 'a' && j == 0)
				str[i] -= 32;
			else if (j > 0 && str[i] <= 'Z' && str[i] >= 'A')
				str[i] += 32;
			++i;
			++j;
		}
		if (j == 0)
			++i;
		j = 0;
	}
	return (str);
}
