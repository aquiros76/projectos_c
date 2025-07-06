/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:51:35 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/16 14:26:51 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	i = 0;
	while (dest == src || !n)
	{
		return (dest);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
