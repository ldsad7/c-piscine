/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:31:15 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/30 19:20:22 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		find_t1(int hour, char *ap1, char *ap2)
{
	int	t1;

	t1 = hour;
	if (t1 < 12)
		*ap1 = 'A';
	else
	{
		*ap1 = 'P';
		t1 = hour - 12;
	}
	if (hour == 0 || hour == 12)
		t1 = 12;
	return (t1);
}

void	ft_takes_place(int hour)
{
	char	ap1;
	char	ap2;
	int		t1;
	int		t2;

	ap1 = 'A';
	ap2 = 'P';
	hour = hour % 24;
	t1 = find_t1(hour, &ap1, &ap2);
	t2 = (hour + 1) % 24;
	if ((t2 % 24) < 12)
		ap2 = 'A';
	else
	{
		ap2 = 'P';
		t2 = hour + 1 - 12;
	}
	if ((hour + 1) % 24 == 0 || hour + 1 == 12)
		t2 = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
			t1, ap1, t2, ap2);
}
