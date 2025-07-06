/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:32:01 by aquiros-          #+#    #+#             */
/*   Updated: 2022/11/27 12:55:06 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	fil;
	int	col;

	if (x < 1 || y < 1)
		return ;
	fil = 1;
	while (fil <= y)
	{
		col = 1;
		while (col <= x)
		{	
			if ((col == 1 || col == x) && (fil == 1))
				ft_putchar('A');
			else if ((col == 1 || col == x) && (fil == y))
				ft_putchar('C');
			else if ((col > 1 && col < x) && (fil > 1 && fil < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		ft_putchar('\n');
		fil++;
	}
}
