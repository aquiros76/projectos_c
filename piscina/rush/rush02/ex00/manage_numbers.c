/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:20:34 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 17:56:36 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_n(char *dict, char *x, char z);

void	manage_cents(char *dict, char *x, char z)
{
	char	aux[2];

	aux[0] = *x;
	aux[1] = '\0';
	print_n(dict, aux, z);
	print_n(dict, "100", 0);
}

void	manage_decen(char *dict, char *x, int *n, char z)
{
	char	aux[3];

	aux[0] = *x;
	if (*x == '1')
	{
		++x;
		--*n;
		aux[1] = *x;
	}
	else
	{
		aux[1] = '0';
	}
	aux[2] = '\0';
	print_n(dict, aux, z);
}

void	manage_units(char *dict, char *x, char z)
{
	char	aux[2];

	aux[0] = *x;
	aux[1] = '\0';
	print_n(dict, aux, z);
}

void	manage_dig(char *dict, int *n, char *x, char z)
{
	if (*n % 3 == 0)
		manage_cents(dict, x, z);
	else if (*n % 3 == 2)
		manage_decen(dict, x, n, z);
	else
		manage_units(dict, x, z);
}
