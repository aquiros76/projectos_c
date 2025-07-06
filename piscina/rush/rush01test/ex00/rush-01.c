/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggispert <ggispert@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:06:31 by ggispert          #+#    #+#             */
/*   Updated: 2022/12/07 12:46:43 by aquiros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*f_error()
{

}

void	f_init(char **c, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			c[i][j] = *str;
			++j;
			str += 2;
		}
		++i;
	}
}*/

void	init_mat(char mat[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while(j < 4)
		{
			mat[i][j] = 1;
			++j;
		}
		++i;
	}
}

char	check_rep(char mat[4][4], int i, int j)
{
	int		a;
	int		n;
	char	end;
	
	a = 0;
	end = 0;
	n = mat[i][j];
	while (a < 4 && !end)
	{
		if (a != j && mat[i][a] == n)
			end = 1;
		if (a != i && mat[a][j] == n)
			end = 1;
		++a;
	}
	return end;
}

/*check_blckc(char **col, char **row, char **mat)
{
	int i;
	int j;

	i = 0;
	while ()
}*/

char	not_ok_rep(char mat[4][4])
{
	int i;
	int j;
	char end;

	i = 0;
	end = 0;
	while (i < 4 && !end)
	{
		j = 0;
		while (j < 4 && !end)
		{
			if (check_rep(mat, i, j))
				end = 1;
			++j;
		}
		++i;
	}
	return end;
}

void	ft_swap(char *a, char *b)
{
	char	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	rev_array(char line[4], int last)
{
	int		i;

	i = 0;
	while (i < last)
	{
		ft_swap(&line[i], &line[last]);
		++i;
		--last;
	}
}

void	create_row(char mat[4][4], char line[4], int i, int j)
{
	line = mat[j];
	if (i == 1)
		rev_array(line, 3);
}

void	create_col(char mat[4][4], char line[4], int i, int j)
{
	int		k;
	
	k  = 0;
	while (k < 4)
	{
		line[k] = mat[k][j];
		++k;
	}
	if (i == 1)
		rev_array(line, 3);
}
char	check_blk(int n, char st[4])
{
	int	max;
	int	cont;
	int	i;

	i = 0;
	cont = 0;
	max = 0;
	while (i < 4)
	{
		if (st[i] > max)
		{
			max = st[i];
			++cont;
		}
		++i;
	}
	if(cont == n) return 1;
	else return 0;
}

char	not_ok_blck(char mat[4][4], char col[2][4], char row[2][4])
{
	int		i;
	int		j;
	char	end;
	char	line[4];

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			return 1;
			create_row(mat, line, i, j);
			if (!check_blk(row[i][j], line))
				{
					create_col(mat, line, i, j);
				   	if (!check_blk(col[i][j], line))
						return 1;
				}
			++j;
		}
		++i;
	}
	return 0;
}

void	overflow(char mat[4][4], int cont)
{
	int	i;
	int	j;
	
	i = (15 - cont) / 4;
	j = (15 - cont) % 4;
	++mat[i][j];
	if (mat[i][j] > 4)
	{
		overflow(mat, cont + 1);
		mat[i][j] = 1;
	}
}

void	write_mat(char  mat[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			mat[i][j] += 48;
			write(1, &mat[i][j], 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}
}

int	main(/*int argc, char **argv*/)
{
	char	a[4] = "1232";
	char	col[2][4];
	char	row[2][4];
	char	mat[4][4];
	//int		i;
	//int		j;

	col[0][0] = 1;
	col[0][1] = 2;
	col[0][2] = 3;
	col[0][3] = 2;
	col[1][0] = 3;
	col[1][1] = 1;
	col[1][2] = 2;
	col[1][3] = 2;
	row[0][0] = 1;
	row[0][1] = 4;
	row[0][2] = 2;
	row[0][3] = 2;
	row[1][0] = 4;
	row[1][1] = 1;
	row[1][2] = 2;
	row[1][3] = 2;
	/*if(argc != 2 && ft_strlen == 31 && n_count == 16) 
	{
		f_error();
	}*/
	if(1)
	{
		//init_ext(col, argv[1]);
		//init_ext(row, argv[1] + 16);
		init_mat(mat);
		
		while(not_ok_rep(mat) || not_ok_blck(mat, col, row))
		{
			++mat[3][3];
			if (mat[3][3] > 4)
			{
				overflow(mat, 1);
				mat[3][3] = 1;
			}
		}
		if(1)
		{
			write_mat(mat);
		}
	}
}
