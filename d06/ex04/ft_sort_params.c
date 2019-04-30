/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:11:14 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/29 18:22:50 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	j;
	int	i;

	i = 0;
	j = 2;
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
}

void	sorting(int argc, char **argv, int j)
{
	int		k;
	char	*str;

	str = "";
	k = 3;
	while (j <= argc)
	{
		while (k <= argc - j + 2)
		{
			if (ft_strcmp(argv[k - 2], argv[k - 1]) > 0)
			{
				str = argv[k - 2];
				argv[k - 2] = argv[k - 1];
				argv[k - 1] = str;
			}
			k++;
		}
		j++;
		k = 3;
	}
}

int		main(int argc, char **argv)
{
	int		j;

	j = 2;
	sorting(argc, argv, j);
	ft_print_params(argc, argv);
	return (0);
}
