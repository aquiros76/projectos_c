/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_42.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:05:18 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/24 12:22:41 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int f;
	int	cant;
	int	val;
	int	n;

	cant = 0;
	printf("Cuantos valores ingresara :");
	scanf("%i", &n);
	for (f = 1; f <= n; f++)
	{
		printf("ingrese un valor: ");
		scanf("%i", &val);
		if (val >= 1000)
		{
			cant = cant + 1;
		}
	}
	printf("Cantidad de valores mayores a 1000: ");
	printf("%i", cant);
	printf("\n");
	return (0);
}

/*video_44: Escribe un programa que lea n numeros enteros y calcule la cantidad
			de valores mayores o iguales a 1000*/