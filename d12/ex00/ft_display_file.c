/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 01:47:04 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/06 23:19:37 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

int		ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(int fd, char *str)
{
	write(fd, str, ft_lenstr(str));
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		fd;

	if (argc == 1)
		ft_putstr(2, "File name missing.\n");
	else if (argc >= 3)
		ft_putstr(2, "Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(1, buf);
		}
		close(fd);
	}
	return (0);
}
