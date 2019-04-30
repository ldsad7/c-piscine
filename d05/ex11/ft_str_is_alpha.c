/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 00:44:17 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/28 01:37:51 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int fl;

	fl = 0;
	i = 0;
	while (str[i] != '\0' && fl == 0)
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'\
						&& str[i] <= 'Z')))
		{
			fl = 1;
			break ;
		}
		++i;
	}
	if (fl == 0)
		return (1);
	else
		return (0);
}
