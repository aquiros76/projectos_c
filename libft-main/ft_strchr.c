/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:11:31 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 14:46:53 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
/*la funcion busca en la string hasta que encuentra el caracter definido ',' y 
devuelve del caracter defino hasta el final de la string, (|, como estas|).
si el caracter no esta devuelve NULL*/
int	main()
{
	const char str[] = "hola mundo, como estas";
	const char ch = ',';
	char	*ret;

	ret = ft_strchr(str, ch);
	printf("string |%c| es - |%s|\n", ch, ret);
	return (0);
}
