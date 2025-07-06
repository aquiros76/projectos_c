/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:10:12 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 12:59:03 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>
# include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	test(int size)
{
	char string[] = "hola, es la prueba";
	char buffer[19];
	int	r;

	r = strlcpy(buffer, string, size);
	printf("copia '%s' en '%s', length %d\n", string, buffer, r);
}
int	main()
{
	test(19);
	test(2);
}
