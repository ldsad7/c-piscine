/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsimonis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 03:09:07 by tsimonis          #+#    #+#             */
/*   Updated: 2018/08/28 22:50:03 by tsimonis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	final_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	final_len = src_len;
	if (size <= dest_len)
		final_len = final_len + size;
	else
		final_len = final_len + dest_len;
	src_len = 0;
	while (src[src_len] != '\0' && dest_len + 1 < size)
		dest[dest_len++] = src[src_len++];
	dest[dest_len] = '\0';
	return (final_len);
}
