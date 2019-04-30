/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:34:33 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/06 23:35:01 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H
# define BUF_SIZE 4096
# define ENOENT_ "No such file or directory"
# define EISDIR_ "Is a directory"
# define EACCES_ "Permission denied"
# define EINTR_ "Interrupted function call"
# define EIO_ "Input/output error"
# define EINVAL_ "Invalid argument"

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <errno.h>

int		ft_strcmp(char *s1, char *s2);
void	error_printing(char **argv, int i);
void	input_tail(int fd, char **argv, int i, int c);
int		ft_atoi(char *str);
int		check_if_plus(char *str);
int		ft_lenstr(char *str);

#endif
