/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:17:21 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 21:28:41 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

char	rush1(int cols, int rows, int i)
{
	if (i == 0 || i == (cols + 1) * (rows - 1) + cols - 1)
		return ('/');
	else if (i == cols - 1 || i == (cols + 1) * (rows - 1))
		return ('\\');
	else if ((i >= 1 && i <= cols - 2)  ||
	(i >= (cols + 1) * (rows - 1) + 1 && (cols + 1) * (rows - 1) + cols -2)
	|| ((i % (cols + 1) == 0) && (i % (cols + 1) == cols - 1)))
		return ('*');
	else
		return (' ');
}
