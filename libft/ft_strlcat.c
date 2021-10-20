/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breadyma <breadyma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:01:03 by breadyma          #+#    #+#             */
/*   Updated: 2021/10/12 15:46:48 by breadyma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;
	size_t	d;
	size_t	c;

	i = ft_strlen(dst);
	s = ft_strlen(src);
	c = 0;
	d = i;
	if (i < (size - 1) && size > 0)
	{
		while (d + c < size - 1 && src[c])
		{
			dst[i] = src[c];
			c++;
			i++;
		}
	}
	if (i < size)
		dst[i] = '\0';
	if (d > size)
		d = size;
	return (d + s);
}
