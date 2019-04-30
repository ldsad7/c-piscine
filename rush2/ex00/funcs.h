/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:52:22 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 05:10:33 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# define BUF_SIZE 1

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	rush(int x, int y);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		rush0(int x, int y, char *buff);
void	ft_putnbr(int nb);

#endif
