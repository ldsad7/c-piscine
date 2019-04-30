/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 04:08:30 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 22:54:49 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			++j;
		}
		ft_putchar('\n');
		++i;
		j = 0;
	}
}
