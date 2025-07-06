/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:03:39 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/15 10:32:32 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long i)
{
	int	count;

	count = 0;
	if (i <= 0)
		count++;
	while (i)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	i = ft_count(nbr);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = 0;
	str[0] = 48;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[--i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (str);
}
