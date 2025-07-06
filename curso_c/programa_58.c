/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   programa_58.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:54:40 by aquiros-          #+#    #+#             */
/*   Updated: 2023/03/21 11:31:08 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int		i;
	float	alt[3];
	float	suma;
	float	promedio;
	int		may;
	int		men;

	i = 0;
	printf("Ingrese la primera altura: ");
	scanf("%f", &alt[0]);
	printf("Ingrese la segunda altura: ");
	scanf("%f", &alt[1]);
	printf("Ingrese la tercera altura: ");
	scanf("%f", &alt[2]);
	suma = suma + alt[i];
	promedio = suma / 3;
	printf("Promedio de altura: ");
	printf("%.2f", promedio);
	printf("\n");
	may = 0;
	men = 0;
	if (alt[i] > promedio)
	{
		may++;
	}
	else
	{
		if (alt[i] < promedio)
		{
			men++;
		}
	}
	printf("Personas con altura mayor al promedio: ");
	printf("%i", may);
	printf("\n");
	printf("Personas con altura menor al promedio: ");
	printf("%i", men);
	printf("\n");
	return (0);
}
