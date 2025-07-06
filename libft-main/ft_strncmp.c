/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 08:41:02 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/01 09:10:01 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*la funcion compara las dos strings, definimos el tamaño de las
2 strings ([9], [8]), imprimimos que s1 es = al nombre (artesano) y
s2 a (artista), establecemos i = a s1, s2 y los caracters que queremos
comprovar (3)*/
int	main()
{
	char s1[9] = "artesano";
	char s2[8] = "artista";
	int	i;

	printf("s1=%s\t", s1);
	printf("s2=%s\n", s2);

	i = strncmp (s1, s2, 3);
/*el primer print es la cabecera, despues establece
si es menor, mayor o igual*/
	printf("las 3 primeras letras de s1 son");
	if (i < 0) printf("menores que");
	else if (i > 0) printf("mayores que");
	else printf("iguales a");
	printf("s2\n");
	return (0);
}
/*compara los caracters y devuelve si son iguales,
mayores o menores*/