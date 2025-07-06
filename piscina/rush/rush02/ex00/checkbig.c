/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkbig.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:31:28 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 17:32:31 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_n(char *dict, char *x, char z);

void	checkbig(int n, char *dict, char *s)
{
	if (n == 3 && *s)
		print_n(dict, "1000", 0);
	if (n == 6 && *s)
		print_n(dict, "1000000", 0);
	if (n == 9 && *s)
		print_n(dict, "1000000000", 0);
	*s = 0;
}
