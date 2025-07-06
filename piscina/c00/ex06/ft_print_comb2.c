/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 08:28:21 by aquiros-          #+#    #+#             */
/*   Updated: 2022/12/07 11:29:11 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	cal(int num);

void	cal(int num)

{
	int	a;
	int	b;

	if (num < 10)
	{
		write(1, "0", 1);
		b = num + 48;
		write(1, &b, 1);
	}
	else
	{
		a = num / 10 + 48;
		b = num % 10 + 48;
		write (1, &a, 1);
		write (1, &b, 1);
	}
}

void	ft_print_comb2(void)

{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			cal(a);
			write(1, " ", 1);
			cal(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
