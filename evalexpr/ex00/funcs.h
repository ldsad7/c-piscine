/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:44:41 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 23:14:31 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

# include <unistd.h>
# include <stdlib.h>

void			ft_putchar(char c);
void			ft_putnbr(int nbr);
int				eval_expr2(char **str, int fl);
int				ft_atoi(char **str);
int				get_number1(char **str, int fl1);
long long int	get_number2(char **str, int fl1, int fl2);

#endif
