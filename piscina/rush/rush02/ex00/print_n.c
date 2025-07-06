/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_n.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:16:37 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 17:17:40 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr_2(char *dict, char *x);

void	print_n(char *dict, char *x, char z)
{
	char	*p;

	if (!z)
		write(1, " ", 1);
	p = ft_strstr_2(dict, x);
	while (*p == ' ' || *p == ':' || *p == '\t')
		++p;
	while (*p != '\n')
	{
		write(1, p, 1);
		++p;
	}
}
