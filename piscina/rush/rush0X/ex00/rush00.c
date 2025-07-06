/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:53:25 by aquiros-          #+#    #+#             */
/*   Updated: 2022/11/27 11:25:53 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y)
{
	int	fil;
	int col;

	fil = 1;
	while (fil <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 || col == x) && (fil == 1 || fil == y))
				ft_putchar('o');
	 		else if ((col > 1 && col < x) && (fil > 1 && fil < y))
			   ft_putchar(' ');
			else if (( col < x && fil == 1) || (col < x && fil == y))
				ft_putchar('-');
			else
				ft_putchar('|');
			col++;
		}
		ft_putchar('\n');
		fil++;
	}
}
