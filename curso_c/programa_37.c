/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_37.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:52:41 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/20 12:04:17 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	pares;
	int	impares;
	int	x;
	int	n;
	int	valor;

	x = 1;
	pares = 0;
	impares = 0;
	printf("Cuantos numeros ingresara: ");
	scanf("%i", &n);
	while (x <= n)
	{
		printf("Ingrese el valor: ");
		scanf("%i", &valor);
		if (valor%2 == 0)
		{
			pares = pares + 1;
		}
		else
		{
			impares = impares + 1;
		}
		x = x + 1;
	}
	printf("Cantidad de pares: ");
	printf("%i", pares);
	printf("\n");
	printf("Cantidad de impares: ");
	printf("%i", impares);
	printf("\n");
	return (0);
}

/*el operador %2 retorna el resto de la division de dos valores*/