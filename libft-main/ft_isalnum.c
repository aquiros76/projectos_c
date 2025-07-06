/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:41:05 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/30 13:59:37 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main()
{
	char	c;

	printf("intoduce el caracter: ");
	scanf("%c", &c);

	if (ft_isalnum(c) == 0)
		printf("%c no es letra ni digito", c);
	else
		printf("%c es una letra o un digito", c);
	return (0);
}
