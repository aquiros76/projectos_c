/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:14:49 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 14:00:46 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(dest);
	j = len;
	if (size <= len)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && j < size - 1)
		dest[j++] = src[i++];
	dest[j] = 0;
	return (len + ft_strlen(src));
}
/*concatena lo que apunta el puntero de *s, lo copia en un arrai, para despues juntarlo (Angel y quiros)*/
int	main()
{
	char *s = "Quiros";
	char target[30] = "Angel";

	printf("Nombre: \"%s\"\n", target);
	ft_strlcat(target, s, sizeof(target));
	printf("Nombre y apellidos: \"%s\"\n", target);
	return (0);
}
