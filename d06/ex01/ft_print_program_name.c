/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 04:49:10 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/29 18:48:03 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
		ft_putchar(argv[0][i++]);
	ft_putchar('\n');
	return (argc - argc);
}
