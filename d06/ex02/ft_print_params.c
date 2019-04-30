/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 04:56:50 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/29 18:20:27 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	j;
	int	i;

	j = 2;
	i = 0;
	while (j <= argc)
	{
		while (argv[j - 1][i] != '\0')
		{
			ft_putchar(argv[j - 1][i]);
			++i;
		}
		ft_putchar('\n');
		i = 0;
		++j;
	}
	return (0);
}
