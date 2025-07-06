/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:15:59 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 17:46:02 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strstr_2(char *dict, char *x)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(x);
	while (*dict != '\0')
	{
		while (*dict != ':')
		{
			if (*dict == x[i])
			{
				if (i == len - 1)
					return (dict + 1);
				++i;
			}
			else
				i = 0;
			++dict;
		}
		while (*dict != '\0' && *dict != '\n')
			++dict;
	}
	return (0);
}
