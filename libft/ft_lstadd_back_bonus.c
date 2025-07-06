/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:18:38 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/17 11:00:11 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	final = *lst;
	if (final == NULL)
	{
		*lst = new;
	}
	else
	{
		final = ft_lstlast(*(lst));
		final->next = new;
	}
}
