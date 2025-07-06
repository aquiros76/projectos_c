/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_59.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:49:21 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/21 12:52:23 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	float	turnman[4];
	float	turntar[4];
	float	man;
	float	tar;
	int		i;
	float	gastostotales;

	i = 0;
	printf("Sueldos de los empleados del turno de mañana: \n");
	printf("Ingrese el sueldo: ");
	scanf("%f", &turnman[0]);
	printf("Ingrese el sueldo: ");
	scanf("%f", &turnman[1]);
	printf("Ingrese el sueldo: ");
	scanf("%f", &turnman[2]);
	printf("Ingrese el sueldo: ");
	scanf("%f", &turnman[3]);
	printf("Sueldo de los empleados del turno de tarde: \n");
	printf("Ingrese el sueldo: ");
	scanf("%f", &turntar[0]);
	printf("Ingrese el sueldo: ");
	scanf("%f", &turntar[1]);
	printf("Ingrese el sueldo: ");
	scanf("%f", &turntar[2]);
	printf("Ingrese el sueldo: ");
	scanf("%f", &turntar[3]);
	man = 0;
	tar = 0;
	man = turnman[0] + turnman[1] + turnman[2] + turnman[3];
	tar = turntar[0] + turntar[1] + turntar[2] + turntar[3];
	printf("Total de gastos del turno de mañana: ");
	printf("%.2f\n", man);
	printf("Total de gastos turno de tarde: ");
	printf("%.2f\n", tar);
	gastostotales = man + tar;
	printf("El gasto total es: ");
	printf("%.2f\n", gastostotales);
	return (0);
}
