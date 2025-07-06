/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquiros- <aquiros-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:34:00 by aquiros-          #+#    #+#             */
/*   Updated: 2023/02/22 08:53:04 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **res)
{
	char	**ptr;

	ptr = res;
	while (*ptr)
	{
		free (*ptr++);
	}
	free (res);
}

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			word++;
		i++;
	}
	return (word);
}

static char	**write_result(char const *s, char c, char **res)
{
	size_t	start;
	size_t	i;
	size_t	word;

	start = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			res[word] = ft_substr(s, start, i - start + 1);
			if (!res[word])
			{
				ft_free(res);
				return (0);
			}
			word++;
		}
		if (s[i] == c && (s[i + 1] != c || s[i + 1] != '\0'))
			start = i + 1;
		i++;
	}
	res[word] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (0);
	res = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!res)
		return (0);
	res = write_result(s, c, res);
	return (res);
}
