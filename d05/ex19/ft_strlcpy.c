/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 23:02:24 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/28 23:16:04 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	final_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	final_len = src_len;
	if (size == 0)
		return (final_len);
	src_len = 0;
	while (src[src_len] != '\0' && src_len + 1 < size)
	{
		dest[src_len] = src[src_len];
		src_len++;
	}
	dest[src_len] = '\0';
	return (final_len);
}
