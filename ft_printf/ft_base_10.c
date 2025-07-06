/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:19:04 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/23 10:01:42 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	int_max(int n)
{
	(void)n;
	if (write (1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int	ft_base_10(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (int_max(n));
	if (n < 0 && ++i)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		n = -n;
	}
	if (n > 9)
	{
		i += ft_base_10(n / 10);
		if (i == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar(('0' + n)) == -1)
			return (-1);
		i++;
	}
	return (i);
}
