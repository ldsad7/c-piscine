/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:15:34 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/06 23:35:19 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int				ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void			error_printing(char **argv, int i)
{
	if (errno == 21)
		return ;
	write(2, "tail: ", 6);
	write(2, argv[i], ft_lenstr(argv[i]));
	write(2, ": ", 2);
	if (errno == 2)
		write(2, ENOENT_, ft_lenstr(ENOENT_));
	else if (errno == 13)
		write(2, EACCES_, ft_lenstr(EACCES_));
	else if (errno == 4)
		write(2, EINTR_, ft_lenstr(EINTR_));
	else if (errno == 5)
		write(2, EIO_, ft_lenstr(EIO_));
	else if (errno == 22)
		write(2, EINVAL_, ft_lenstr(EINVAL_));
	else
		write(2, "Some unknown error", ft_lenstr("Some unknown error"));
	write(2, "\n", 1);
}

void			input_tail(int fd, char **argv, int i, int c)
{
	char		buf[BUF_SIZE + 1];
	int			ret;
	int			length;

	if ((ret = read(fd, buf, BUF_SIZE)) == -1)
		error_printing(argv, i);
	else
	{
		buf[ret] = '\0';
		length = ft_lenstr(buf);
		write(1, buf + (length + c) % length + (-1) * (c > 0),
				(-1) * c + length * (c > 0) + (c > 0));
	}
}

void			add_func(int argc, char **argv, int i, int c)
{
	int		fd;

	if (argc >= 5)
	{
		write(1, "==> ", ft_lenstr("==> "));
		write(1, argv[i], ft_lenstr(argv[i]));
		write(1, " <==\n", ft_lenstr(" <==\n"));
	}
	fd = open(argv[i], O_RDONLY, S_IRUSR);
	if (fd == -1)
		error_printing(argv, i);
	else
		input_tail(fd, argv, i, c);
	close(fd);
	if (argc >= 5 && i != argc - 1)
		write(1, "\n", 1);
}

int				main(int argc, char **argv)
{
	int				i;
	int				c;

	if (argc == 1)
		input_tail(0, argv, 0, ft_lenstr(argv[0]));
	else
	{
		c = ft_atoi(argv[2]);
		if (!check_if_plus(argv[2]) && c > 0)
			c = (-1) * c;
		i = 3;
		if (argc == 3)
			input_tail(0, argv, 3, c);
		else
		{
			while (i < argc)
				add_func(argc, argv, i++, c);
		}
	}
	return (0);
}
