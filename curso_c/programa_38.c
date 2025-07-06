/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_38.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:01:23 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/24 09:18:19 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	main()
{
	int	num;

	num = 1;
	printf("Numeros del 1 al 100: ");
	while (num <= 100)
	{
		printf("%i", num);
		printf(" - ");
		num++;
	}
	return (0);
}*/
//El mismo programa con ciclo FOR
int	main()
{
	int	f;

	printf("Los numeros del 1 al 100: ");
	for (f = 1; f <= 100; f = f + 1)
	{
		printf("%i", f);
		printf(" - ");
	}
	printf("\n");
	return (0);
}
