/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_41.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:46:58 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/24 12:03:36 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int	x;
	int	mult3;
	int	mult5;
	int	valor;

	mult3 = 0;
	mult5 = 0;
	for(x = 1; x <= 10; x++)
	{
		printf("Ingrese un valor: ");
		scanf("%i", &valor);
		if (valor % 3 == 0)
		{
			mult3 = mult3 + 1;
		}
		if (valor % 5 == 0)
		{
			mult5 = mult5 + 1;
		}
	}
	printf("La cantidad de numeros multiplos de 3: ");
	printf("%i", mult3);
	printf("\n");
	printf("La cantidad de numeros multiples de 5: ");
	printf("%i", mult5);
	printf("\n");
	return (0);
}

/*video_43: Escribe un programa que lea diez numeros y luego muestre cuantos valores
			son multiplos de 3 y cuantos multiples de 5*/