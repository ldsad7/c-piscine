/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 01:02:38 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/05 01:34:29 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	find_lengths(char *str, int *sent_length, int *word_length)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++i;
		k = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' &&\
			str[i] != '\0')
		{
			k++;
			i++;
		}
		if (k != 0)
			*sent_length += 1;
		if (k > *word_length)
			*word_length = k;
	}
}

char	**memory_allocation(int sent_length, int word_length)
{
	char	**result;
	int		i;

	result = (char **)malloc(sizeof(*result) * (sent_length + 1));
	i = 0;
	while (i < sent_length)
		result[i++] = (char *)malloc(sizeof(**result) * (word_length + 1));
	result[i] = (char *)malloc(sizeof(**result) * (1));
	return (result);
}

void	arr_filling(char **result, char *str, int sent_length)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0' && j < sent_length)
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++i;
		k = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' &&\
			str[i] != '\0')
			result[j][k++] = str[i++];
		result[j][k] = '\0';
		++j;
	}
	result[j] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		sent_length;
	int		word_length;
	char	**result;

	sent_length = 0;
	word_length = 0;
	find_lengths(str, &sent_length, &word_length);
	result = memory_allocation(sent_length, word_length);
	arr_filling(result, str, sent_length);
	return (result);
}

void	printing(char **tab)
{
	int i;
	int j;
	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			write(1, &tab[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

void	ft_sort_wordtab(char **tab);

int		main(void)
{
	char **tab;
	char str[] = "Hello my friend, how you are?";
	tab = ft_split_whitespaces(str);
	printing(tab);
	ft_sort_wordtab(tab);
	printing(tab);
}
