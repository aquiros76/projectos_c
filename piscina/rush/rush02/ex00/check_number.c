/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:56:05 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 22:42:09 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

char	check_number(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9' || len < 12)
			return (0);
		i++;
	}
	return (1);
}
