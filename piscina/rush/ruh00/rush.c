/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasull- <jgasull-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:30:46 by jgasull-          #+#    #+#             */
/*   Updated: 2022/11/26 17:00:31 by jgasull-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	fil;
	int	col;
	int	a;
	
	a = 92;
	if (x < 1 || y < 1)
	{
		write(1, "thats not working", 20);
	}
	else
	{
		fil = 1;
		while (fil <= y)
		{
			col = 1;
			while (col <= x)
			{
				if ((col == 1 && fil == 1) || (col == x) && (fil == y))
					ft_putchar('/');
				else if ((col == x) && (fil == 1) || (col == 1) && (fil == y))
					ft_putchar(a);
				else if ((col > 1) && (col < x) && (fil > 1) && (fil < y))
					ft_putchar(' ');
				else
					ft_putchar('*');
			col++;
			}
			ft_putchar('\n');
			fil++;
		}
	}	
}
