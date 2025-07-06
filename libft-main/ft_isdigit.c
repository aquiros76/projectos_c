/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:48:05 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/30 10:15:13 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main()
{
	char	c;

	printf("introduce el numero: ");
	scanf("%c", &c);
	
	if (ft_isdigit(c) == 0)
		printf("%c no es un digito. ", c);
	else
		printf("%c es un digito.", c);
	return (0);
}
