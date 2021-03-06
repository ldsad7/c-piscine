/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <tsimonis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:17:35 by tsimonis          #+#    #+#             */
/*   Updated: 2018/09/09 21:32:31 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

char	rush2(int cols, int rows, int i)
{
	if (i == 0 || i == cols - 1)
		return ('A');
	else if (i == (cols + 1) * (rows - 1) + cols - 1 ||
			i == (cols + 1) * (rows - 1))
		return ('C');
	else if ((i >= 1 && i <= cols - 2)  ||
	(i >= (cols + 1) * (rows - 1) + 1 && (cols + 1) * (rows - 1) + cols -2) ||
	((i % (cols + 1) == 0) && (i % (cols + 1) == cols - 1)))
		return ('B');
	else
		return (' ');
}
