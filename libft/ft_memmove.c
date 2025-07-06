/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:28:34 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/18 09:05:41 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *) src;
	if (src == dst)
		return (dst);
	if (s < d && s + len > d)
		while (len --)
			*(d + len) = *(s + len);
	else
	{
		while (len--)
		{
			*d = *s;
			s++;
			d++;
		}
	}
	return (dst);
}
