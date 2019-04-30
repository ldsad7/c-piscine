/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:01:32 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/29 18:44:01 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printing(char **argv, int j)
{
	int	i;

	i = 0;
	while (argv[j][i] != '\0')
	{
		ft_putchar(argv[j][i++]);
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int	j;

	j = argc - 1;
	while (j >= 1)
	{
		printing(argv, j);
		--j;
	}
	return (0);
}
