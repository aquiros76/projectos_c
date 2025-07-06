/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:49:55 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 15:04:38 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*busca recursivamente el caracter definido ','
y devuelve hasta el comienzo de la string, si
el caracter no esta devuelve NULL*/
int	main()
{
	const char str[] = "hola, como estas";
	const char ch = ',';
	char *ret;

	ret = ft_strrchr(str, ch);
	printf("string |%c| es - |%s|\n", ch, ret);
	return (0);
}
