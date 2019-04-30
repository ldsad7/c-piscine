/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:41:14 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/06 23:31:35 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#define BUF_SIZE 28000
#define ENOENT_ "No such file or directory"
#define EISDIR_ "Is a directory"
#define EACCES_ "Permission denied"
#define EINTR_ "Interrupted function call"
#define EIO_ "Input/output error"
#define EINVAL_ "Invalid argument"
#define EBADF_ "Bad file descriptor"

unsigned int	ft_lenstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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
	write(2, "cat: ", 5);
	write(2, argv[i], ft_lenstr(argv[i]));
	write(2, ": ", 2);
	if (errno == 2)
		write(2, ENOENT_, ft_lenstr(ENOENT_));
	else if (errno == 21)
		write(2, EISDIR_, ft_lenstr(EISDIR_));
	else if (errno == 13)
		write(2, EACCES_, ft_lenstr(EACCES_));
	else if (errno == 4)
		write(2, EINTR_, ft_lenstr(EINTR_));
	else if (errno == 5)
		write(2, EIO_, ft_lenstr(EIO_));
	else if (errno == 22)
		write(2, EINVAL_, ft_lenstr(EINVAL_));
	else if (errno == 9)
		write(2, EBADF_, ft_lenstr(EBADF_));
	else
		write(2, "Some unknown error", ft_lenstr("Some unknown error"));
	write(2, "\n", 1);
}

void			input_cat(int fd, char **argv, int i)
{
	char		buf[BUF_SIZE + 1];
	int			ret;

	if ((ret = read(fd, buf, BUF_SIZE)) == -1)
		error_printing(argv, i);
	else
	{
		buf[ret] = '\0';
		write(1, buf, ft_lenstr(buf));
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, ft_lenstr(buf));
		}
	}
}

int				main(int argc, char **argv)
{
	int				i;
	int				fd;

	if (argc == 1)
		input_cat(0, argv, 0);
	else
	{
		i = 1;
		while (i < argc)
		{
			if (ft_strcmp(argv[i], "-") == 0)
				fd = 0;
			else
			{
				fd = open(argv[i], O_RDONLY, S_IRUSR);
				if (fd == -1)
					error_printing(argv, i);
			}
			if (fd != -1)
				input_cat(fd, argv, i);
			close(fd);
			i++;
		}
	}
	return (0);
}
