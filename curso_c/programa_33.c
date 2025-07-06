/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_33.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:03:29 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/20 10:30:03 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	n;
	int	x;
	int	cont1;
	int	cont2;
	float	sueldo;
	float	gastos;

	cont1 = 0;
	cont2 = 0;
	gastos = 0;
	x = 1;
	printf("ingrese el numero de trabajadores: ");
	scanf("%i", &n);
	while (x <= n)
	{
		printf("ingrese el sueldo del trabajador: ");
		scanf("%f", &sueldo);
		if (sueldo <= 1300)
		{
			cont1 = cont1 + 1;
		}
		else
		{
			cont2 = cont2 + 1;
		}
		gastos = gastos + sueldo;
		x = x + 1;
	}
	printf("cantidad de trabajadores con sueldos entre 1000 y 1300: ");
	printf("%i", cont1);
	printf("\n");
	printf("cantidad de trabajadores con sueldos mayor a 1300: ");
	printf("%i", cont2);
	printf("\n");
	printf("gastos totales en sueldos: ");
	printf("%.1f", gastos);
	return (0);
}
