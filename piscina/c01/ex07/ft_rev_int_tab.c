/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:13:47 by aquiros-          #+#    #+#             */
/*   Updated: 2022/12/07 11:22:40 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tem;

	i = 0;
	size--;
	while (i < size)
	{	
		tem = tab[i];
		tab[i] = tab[size];
		tab[size] = tem;
		i++;
		size--;
	}
}
