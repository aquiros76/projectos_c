/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:16:44 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 09:30:54 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int	main()
{
	char	str[20];

	strcpy(str, "esto es una prueba");
	puts(str);

	ft_memset(str, '$', 10);
	puts(str);
	return (0);
}
