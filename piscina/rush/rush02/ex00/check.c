/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:34:34 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 21:49:48 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

char	check(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (*str != '\0' && *str == '0')
		++str;
	while (*str >= '0' && *str <= '9' && len < 13)
	{
			++i;
			++str;
	}
	if (*str == '.' | len == 0 || *str < 0 || *str > 9)
		return (0);
	return (1);
}
