/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nosign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:42:15 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/23 10:06:27 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_nosign(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i = ft_nosign(n / 10);
		if (i == -1)
			return (-1);
		n = n % 10;
	}
	if (n <= 9)
	{
		if (ft_putchar('0' + n) == -1)
			return (-1);
		i++;
	}
	return (i);
}
