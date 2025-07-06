/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:29:19 by aquiros-          #+#    #+#             */
/*   Updated: 2023/04/13 10:23:56 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t size)
{
	void	*p;

	p = malloc(len * size);
	if (!p)
		return (0);
	ft_bzero(p, len * size);
	return (p);
}
