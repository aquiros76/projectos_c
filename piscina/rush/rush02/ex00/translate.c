/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:29:11 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 19:01:33 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checkbig(int n, char *dict, char *s);
void	manage_dig(char *dict, int *n, char *x, char z);
void	print_n(char *dict, char *x, char z);
int		ft_strlen(char *str);

void	translate(char *dict, char *x)
{
	int		n;
	char	s;
	char	z;

	n = ft_strlen(x);
	s = 0;
	z = 1;
	while (n > 0)
	{
		if (*x != '0')
		{
			manage_dig(dict, &n, x, z);
			s = 1;
			z = 0;
		}
		--n;
		++x;
		if (n % 3 == 0)
			checkbig(n, dict, &s);
	}
	if (z)
		print_n(dict, "0", z);
}
