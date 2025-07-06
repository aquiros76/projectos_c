/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:54:06 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/20 10:49:36 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(dst);
	j = len;
	if (size <= len)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && j < size -1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (len + ft_strlen(src));
}
