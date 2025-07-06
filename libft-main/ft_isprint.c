/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:41:43 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/30 14:51:39 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	main()
{
	char	c;

	printf("introduce un caracter: ");
	scanf("%c", &c);

	if (ft_isprint(c))
		printf("%c es caracter imprimible", c);
	else
		printf("%c no es un caracter un imprimible", c);
		return (0);
}
