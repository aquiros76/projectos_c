/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 08:53:16 by aquiros-          #+#    #+#             */
/*   Updated: 2022/11/27 09:37:23 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_elcoco(int x, int y)

{
	int	col;
	int	fil;
	int	a;

	a = 92;
	fil = 1;
	while (file <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && fil == 1) || (col == x) && (fil == y))
				ft_putchar('/');
			else if ((col == x) && (fil == 1) || (col == 1) && (fil == y))
				ft_putchar(a);
			else if ((col > 1) && (col < x) && (fil < 1) && (fil < y))
				ft_putchar(' ');
			else
				ftputchar('*');
			col++;
		}
		ft_putchar('\n');
		fil++;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "thats not working", 20);
	}
	else
		ft_elcoco(x, y);
}
