/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_40.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:32:10 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/24 11:04:09 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	apr;
	int	sus;
	int	x;
	int	nota;

	apr = 0;
	sus = 0;
	for (x = 1; x <= 10; x = x + 1)
	{
		printf("Ingrese las notas del alumno: ");
		scanf("%i", &nota);
		if (nota >= 7)
		{
			apr++;
		}
		else
		{
			sus++;
		}
	}
	printf("Cantidad de alumnos aprobados: ");
	printf("%i", apr);
	printf("\n");
	printf("Cantidad de alumnos suspendidos: ");
	printf("%i", sus);
	printf("\n");
	return (0);
}
/*video 42: Escribe un programa que lea las notas de diez alumnos y se informe
		    cuantos alumnos tienen notas mayores o iguales a 7 y cuantos menores
			en programa_31 se utiliza while para el mismo ejercicio.*/ 