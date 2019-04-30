/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:23:32 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 21:23:37 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

char	rush0(int cols, int rows, int i)
{
	if (i == 0 || i == cols - 1 || i == (cols + 1) * (rows - 1) + cols - 1 || 
		i == (cols + 1) * (rows - 1))
		return ('o');
	else if ((i >= 1 && i <= cols - 2)  ||
	(i >= (cols + 1) * (rows - 1) + 1 && (cols + 1) * (rows - 1) + cols -2))
		return ('-');
	else if ((i % (cols + 1) == 0) && (i % (cols + 1) == cols - 1))
		return ('|');
	else
		return (' ');
}
