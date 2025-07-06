/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:07:39 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/01 13:54:56 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t len, size_t size)
{
	void	*ptr;

	ptr = malloc(len * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, len * size);
	return (ptr);
}

int	main(void)
{
	int	*p1 = calloc(4, sizeof(int));
	int	*p2 = calloc(1, sizeof(int[4]));
	int	*p3 = calloc(4, sizeof *p3);

	if (p2)
	{
		for (int n = 0; n < 4; ++n)
			printf("p2[%d] == %d\n", n, p2[n]);
	}
	free(p1);
	free(p2);
	free(p3);
}
