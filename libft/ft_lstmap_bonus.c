/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:14:08 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/22 13:33:01 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;
	void	*tmp;

	if (lst == NULL)
		return (NULL);
	res = 0;
	while (lst != NULL)
	{
		tmp = f(lst->content);
		new = ft_lstnew(tmp);
		if (new == NULL)
		{
			ft_lstclear (&res, del);
			del(tmp);
			return (0);
		}
		ft_lstadd_back (&res, new);
		lst = lst->next;
	}
	new = 0;
	return (res);
}
