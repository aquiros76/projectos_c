/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_34.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:40:36 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/20 10:54:14 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	main()
{
	int	x;
	int s;

	x = 1;
	s = 11;
	while (x <= 25)
	{
		printf("%i", s);
		printf(" - ");
		s = s + 11;
		x = x + 1;
	}
	return (0);
}
*/

int	main()
{
	int	x;
	int	s;

	x = 1;
	while (x <= 25)
	{
		s = x * 11;
		printf("%i", s);
		printf(" - ");
		x = x + 1;
	}
	return (0);
}
