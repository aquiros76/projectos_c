/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 08:40:09 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 09:05:59 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main()
{
	char	c;
	printf ("introduzca una letra \n");
	scanf ("%c", &c);
	c = ft_tolower(c);
	printf("\nSu letra es : %c", c);
}
