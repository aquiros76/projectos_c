/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:37:14 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/23 12:24:16 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (c == 'i' || c == 'd')
		return (ft_base_10(va_arg(args, int)));
	if (c == 'u')
		return (ft_nosign(va_arg(args, unsigned int)));
	if (c == 'X')
		return (ft_hex_may(va_arg(args, unsigned long long)));
	if (c == 'x')
		return (ft_hex_min(va_arg(args, unsigned long long)));
	if (c == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	return (0);
}

static int	ft_format_aux(char c, va_list args)
{
	int	len;

	len = 0;
	if (c != '%')
	{
		len = ft_format(c, args);
		if (len == -1)
			return (-1);
		return (len);
	}
	else
	{
		if (write(1, &c, 1) != 1)
			return (-1);
		return (1);
	}
}

int	ft_printf_aux(char const *str, va_list args)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len = len + ft_format_aux(str[i + 1], args);
			if (len == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write(1, &str[i], 1) != 1)
				return (-1);
			len++;
		}
		i++;
	}
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	len = ft_printf_aux(str, args);
	va_end(args);
	return (len);
}
