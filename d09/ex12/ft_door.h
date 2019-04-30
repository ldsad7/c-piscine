/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 05:46:36 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/31 06:12:29 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>
# define EXIT_SUCCESS 0
# define OPEN 1
# define CLOSE 0

typedef	int		t_bool;
typedef	struct	s_door
{
	int			state;
}				t_door;
void			ft_putstr(char *str);
void			open_door(t_door *door);
void			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);
#endif
