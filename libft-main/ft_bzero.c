/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:32:26 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 09:51:07 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

int	main(void)
{
	char	buffer[50] = "hola, es un test de bzero";
	printf("display del bufer: %s\n", buffer);
	ft_bzero(buffer, 50);
	printf("display del buffer despues de usar bzero: %s", buffer);
	return (0);
}
