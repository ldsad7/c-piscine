/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 18:02:55 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/23 22:59:43 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char arr[3];

	arr[0] = '0';
	while (arr[0] <= '7')
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= '8')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				if (!(a[0] == '7' && a[1] == '8' && a[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				arr[2] = arr[2] + 1;
			}
			arr[1] = arr[1] + 1;
		}
		arr[0] = arr[0] + 1;
	}
}
