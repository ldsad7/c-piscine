/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 23:25:27 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/04 23:38:11 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		len;
	char	*tmp;

	i = 0;
	while (tab[i] != 0)
	{
		len = ft_strlen(tab[i]);
		j = len - 1;
		while (j > i)
		{
			if (ft_strcmp(tab[j], tab[j - 1]) <= 0)
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
			j = j - 1;
		}
		i = i + 1;
	}
}
