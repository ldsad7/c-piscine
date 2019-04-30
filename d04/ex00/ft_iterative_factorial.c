/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 02:53:00 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/25 20:04:55 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 1)
		{
			result = result * nb;
			nb = nb - 1;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
