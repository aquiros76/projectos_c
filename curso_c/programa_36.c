/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_36.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:26:35 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/20 11:50:28 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	suma1;
	int	suma2;
	int	x;
	int	valor;

	x = 1;
	printf("Primera lista.");
	printf("\n");
	while (x <= 15)
	{
		printf("Ingrese un valor: ");
		scanf("%i", &valor);
		suma1 = suma1 + valor;
		x = x + 1;
	}
	printf("Segunda lista.");
	printf("\n");
	x = 1;
	while (x <= 15)
	{
		printf("Ingrese un valor: ");
		scanf("%i", &valor);
		suma2 = suma2 + valor;
		x = x + 1;
	}
	if (suma1 > suma2)
	{
		printf("Lista 1 mayor.");
		printf("\n");
	}
	else
	{
		if (suma1 < suma2)
		{
			printf("Lista 2 mayor");
			printf("\n");
		}
		else
		{
			printf("Lista 1 y lista 2 son iguales.");
			printf("\n");
		}
	}
	return (0);
}
/*se podria hacer la suma de todos los valores de la lista*/