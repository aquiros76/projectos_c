/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:56:05 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 10:35:47 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}


int main()
{
	char c;

	printf("introduce el caracter: ");
	scanf("%c", &c);

	if (ft_isalpha(c))
		printf("%c es una letra del alfabeto.", c);
	else
		printf("%c no es una letra del alfabeto.", c);
	return (0);
}
