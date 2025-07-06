/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:18:08 by aquiros-          #+#    #+#             */
/*   Updated: 2023/01/31 09:15:47 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

int	ft_touper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main()
{
	char	c;
	printf ("introduzca una letra: \n");
	scanf ("%c", &c);
	c = ft_touper(c);
	printf("\nSu letra es : %c", c);
}
