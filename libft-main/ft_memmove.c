/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 10:54:07 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 11:56:55 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *) dest;
	s = (const char *) src;
	if (src == dest)
		return (dest);
	if (s < d && s + len > d)
		while (len --)
			*(d + len) = *(s + len);
	else
	{
		while (len --)
		{
			*d = *s;
			s++;
			d++;
		}
	}
	return (dest);
}

/*int	main()
{
	char	dest[] = "vieja string";
	const char	src[] = "nueva string";

	printf("antes de la funcion = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("despues de la funcion = %s, src = %s\n", dest, src);
	return (0);
}*/
/*sustituimos una parte de la string, la definimos con (20, 15, 11)*/
/*int	main()
{
	char str[] = "memmove es muy util......";
	ft_memmove (str+20, str+15, 11);
	puts (str);
	return (0);
}*/

int	main()
{
	char	str1[] = "hola";
	char	str2[] = "adios";

	puts ("str1 antes de memmove");
	puts (str1);
	/* copiamos el contenido de str2 a str1 */
	ft_memmove (str1, str2, sizeof (str2));
	puts ("\nstr1 despues de memmove");
	puts (str1);
	return (0);
}
