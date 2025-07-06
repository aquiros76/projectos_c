/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:12:46 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/23 13:39:52 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_min(unsigned long long n)
{
	char	*base;
	int		c;

	base = "0123456789abcdef";
	c = 0;
	n = (unsigned int)n;
	if (n >= 16)
	{
		c = ft_hex_min(n / 16);
		if (c == -1)
			return (-1);
		if (write(1, &base[n % 16], 1) == -1)
			return (-1);
		c++;
	}
	if (n < 16)
	{
		if (write(1, &base[n], 1) == -1)
			return (-1);
		c++;
	}
	return (c);
}
