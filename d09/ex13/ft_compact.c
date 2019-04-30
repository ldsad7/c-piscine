/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 06:22:59 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 07:09:30 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *str1, char *str2)
{
	char	*tmp;

	*tmp = *str1;
	*str1 = *str2;
	*str2 = *tmp;
}

int		ft_compact(char **tab, int length)
{
	int	i;
	int	j;

	i = 0;
	while (i < length)
	{
		if (tab[i] == 0)
		{
			j = i + 1;
			while (tab[j] == 0 && j < length)
				++j;
			ft_swap(tab[i], tab[j]);
		}
		i += 1;
	}
	i = 0;
	while (tab[i] != 0)
		++i;
	return (i);
}
