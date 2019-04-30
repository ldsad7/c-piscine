/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_fight.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:14:44 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 15:13:54 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include "ft_ultimate_fight.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void	ft_fight(t_perso *attacker, t_perso *defense, char *attack)
{
	int			i;
	const char	*hits[15] = { PUNCH, KICK, HEADBUTT, KICK1, KICK2,
		KICK3, KICK4, KICK5, KICK6, KICK7,
		KICK8, KICK9, KICK10, KICK11, KICK12 };
	const int	ws[15] = { 5, 15, 20, 13, 3, 18, 9, 11,
		13, 8, 6, 11, 9, 19, 10 };

	if (defense->life <= 0 || attacker->life <= 0)
		return ;
	i = -1;
	while (++i < 14)
		if (attack == hits[i])
			defense->life -= ws[i];
	ft_putstr(attacker->name);
	ft_putstr(" does a judo ");
	ft_putstr(attack);
	ft_putstr(" on ");
	ft_putstr(defense->name);
	ft_putstr(".\n");
	if (defense->life <= 0)
	{
		ft_putstr(defense->name);
		ft_putstr(" is dead.\n");
	}
}
