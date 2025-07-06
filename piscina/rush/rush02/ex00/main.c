/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugrodri <hugrodri@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:54:19 by hugrodri          #+#    #+#             */
/*   Updated: 2022/12/11 22:41:49 by hugrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	check(char *str);
void	file_tr(char *file, char *x);
char	check_number(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (check(argv[1]))
		{
			file_tr("numbers.dict", argv[1]);
		}
		else if (!check_number(argv[1]))
			write (1, "Error", 5);
		else
			write (1, "Dict Error", 10);
	}
	else if (argc == 3)
	{	
		if (check(argv[2]))
		{
			file_tr(argv[1], argv[2]);
		}
		else if (!check_number(argv[2]))
			write (1, "Error", 5);
		else
			write(1, "Dict Error", 10);
	}
	else
		write(1, "Error", 5);
	write(1, "\n", 1);
}
