/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 08:56:20 by aquiros-          #+#    #+#             */
/*   Updated: 2022/12/07 13:42:39 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	swap;
	int	cont;

	cont = 0;
	while (cont < (size - 1))
	{
		if (tab[cont] > tab[cont + 1])
		{
			swap = tab[cont];
			tab[cont] = tab[cont + 1];
			tab[cont + 1] = swap;
			cont = 0;
		}
		else
			cont++;
	}
}
