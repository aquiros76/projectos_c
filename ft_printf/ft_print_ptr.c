/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:25:32 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/24 09:46:38 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_aux(unsigned long long n);

int	ft_print_ptr(void *p)
{
	int					c;
	unsigned long long	ptr;

	ptr = (unsigned long long)p;
	c = 0;
	if (write(1, "0x", 2) != 2)
		return (-1);
	c = ft_ptr_aux(ptr);
	if (c == -1)
		return (-1);
	c += 2;
	return (c);
}

int	ft_ptr_aux(unsigned long long n)
{
	char	*base;
	int		c;

	base = "0123456789abcdef";
	c = 0;
	if (n >= 16)
	{
		c = ft_ptr_aux(n / 16);
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
