/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:38:14 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/01 14:02:42 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*str;

	size = strlen(s) + 1;
	if ((str = malloc(size)) == NULL)
		return (NULL);
	(void)memcpy(str, s, size);
	return (str);
}
/*la fucion devuelve una nueva cadena que es un duplicado de la 
cadena apuntada por s*/
int	main()
{
	char	src[] = "esunaprueba";

	char*	target = ft_strdup(src);
	printf("%s", target);
	return (0);
}
