/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 03:00:33 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/25 03:17:49 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			result = result * nb;
			power = power - 1;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
