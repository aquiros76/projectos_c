/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:55:30 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/30 15:12:50 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <ctype.h>

size_t	ft_strlen(const char *c)
{
	size_t	v;

	v = 0;
	while (*c != '\0')
	{
		c++;
		v++;
	}
	return (v);
}

int	main()
{
	char a[20] = "name";
	char b[20] = {'n', 'a', 'm', 'e', '\0'};

	printf("el tamaño de la string a = %zu \n", ft_strlen(a));
	printf("el tamaño de la string b = %zu \n", ft_strlen(b));
		return (0);
}
