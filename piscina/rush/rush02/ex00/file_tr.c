/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_tr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 17:35:31 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 20:17:42 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_strcpy_2(char *dest, char *src);
void	translate(char *dict, char *x);

void	file_tr(char *file, char *x)
{
	int		fd;
	char	aux[13];
	char	buf[10000];

	fd = open(file, O_RDONLY);
	if (fd >= 0)
	{
		read(fd, buf, sizeof(buf));
		ft_strcpy_2(aux, x);
		translate(buf, aux);
		close(fd);
	}
	else
		write(1, "Dict Error", 10);
}
