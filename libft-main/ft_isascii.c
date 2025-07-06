/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:02:44 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/30 14:24:11 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main()
{
	char	c;

	printf("introduce un caracter: ");
	scanf("%c", &c);

	if (ft_isascii(c) == 0)
		printf("%c el caracter esta en el rango", c);
	else
		printf("%c el caracter no esta en el rango", c);
		return (0);
}
