/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:36:56 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/01 10:10:01 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n -1))
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
/*la funcion compara las dos strings y determina si es mayor, menor o
igual la str1 con la str2*/
int	main()
{
	char	str1[] = "995454523";
	char	str2[] = "995454578";
	int	n;

	n = ft_memcmp (str1, str2, sizeof(str1));
	if (n > 0) printf("'%s' es mayor que '%s'.\n", str1, str2);
	else if (n < 0) printf ("'%s' es menor que '%s'.\n", str1, str2);
	else printf ("'%s' es igual que '%s'.\n", str1, str2);
	return (0);
}
