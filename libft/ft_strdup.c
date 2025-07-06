/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:13:25 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/01 17:32:25 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	ft_strlcpy(res, s, ft_strlen(s) + 1);
	return (res);
}
