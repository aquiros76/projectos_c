/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:11:17 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/01 12:32:31 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
			++big;
			--len;
	}
	return (NULL);
}
/*la funcion busca en string una cadena de caracteres (little) dentro 
de otra (big)*/
int	main()
{
	const char *big = "esto no es una prueba";
	const char *little = "esto es una prueba";
	char *ptr;

	ptr = ft_strnstr(big, little, 4);
	printf ("la little string es: %s");
	return (0);
}
