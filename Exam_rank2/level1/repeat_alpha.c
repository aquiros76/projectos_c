/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:34:53 by aquiros-          #+#    #+#             */
/*   Updated: 2023/05/09 11:43:48 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write (1, &c, 1);
		--i;
	}
}

void	repeat_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			ft_putchar(*str, *str + 1 - 'a');
		else if (*str >= 'A' && *str <= 'Z')
			ft_putchar(*str, *str + 1 - 'A');
		else
			write (1, str, 1);
		++str;
	}
}

int	main(int agc, char **agv)
{
	if (agc == 2)
		repeat_alpha(agv[1]);
	write (1, "\n", 1);
	return (0);
}
