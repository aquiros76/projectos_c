/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:04:07 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 10:42:46 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

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

int	main()
{
	const char src[40] = "hola";
	char dest [40];
	strcpy(dest, "adios");
	printf("antes memcpy destino = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("despues memcpy dest = %s\n", dest);
	return (0);
}
