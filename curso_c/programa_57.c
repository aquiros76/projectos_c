/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_57.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:05:31 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/22 08:51:37 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	main()
{
	int	i;
	int	nota[5];

	i = 0;
	printf("ingrese la nota 1: ");
	scanf("%i", &nota[0]);
	printf("Ingrese la nota 2: ");
	scanf("%i", &nota[1]);
	printf("ingrese la nota 3: ");
	scanf("%i", &nota[2]);
	printf("Ingrese la nota 4: ");
	scanf("%i", &nota[3]);
	printf("Ingrese la nota 5: ");
	scanf("%i", &nota[4]);
	
	printf("Lista de notas: \n");
	printf("%i\n", nota[0]);
	printf("%i\n", nota[1]);
	printf("%i\n", nota[2]);
	printf("%i\n", nota[3]);
	printf("%i\n", nota[4]);
	return (0);
}*/

int	main()
{
	int	f;
	int	sueldo[5];

	for(f = 0; f < 5; f++)
	{
		printf("Ingrese el sueldo: ");
		scanf("%i", &sueldo[f]);
	}
	printf("Listado de sueldos: \n");
	for(f = 0; f < 5; f++)
	{
		printf("%i", sueldo[f]);
		printf("\n");
	}
	return (0);
}
