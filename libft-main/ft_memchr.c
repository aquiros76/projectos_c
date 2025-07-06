/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:12:07 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/01 12:45:00 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return ((unsigned char *)(str + i));
				i++;
	}
	return (0);
}
/*la funcion busca el caracter especifico ('.'), 
si lo encuentra devuelve el resto de la cadena, 
si no lo encuentra devuelve un puntero nulo.
ch es el caracter y ret el retorno*/
int	main()
{
	const char str[] = "esto. es una prueba";
	const char ch = '.';
	char *ret;

	ret = memchr(str, ch, ft_strlen(str));
	printf("la string despes del caracter |%c| es |%s|\n", ch, ret);
	return (0);
}
