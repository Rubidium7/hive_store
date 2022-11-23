/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjunttil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:45:05 by jjunttil          #+#    #+#             */
/*   Updated: 2022/07/10 21:13:29 by jjunttil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"solve_sudoku.h"

int	check_col_row(int col_n, int row_n, int sudoku[9][9], int n)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		if (sudoku[i][row_n] == n || sudoku[col_n][i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	check_box(int box_n, int sudoku[9][9], int n)
{
	int	i;
	int	row_n;
	int	col_n;

	i = 0;
	row_n = (box_n / 3) * 3;
	col_n = (box_n % 3) * 3;
	while (i < 9)
	{
		if (sudoku[col_n + (i % 3)][row_n + (i / 3)] == n)
			return (0);
		i++;
	}
	return (1);
}

void	print_s(int sudoku[9][9])
{
	int		i;
	int		j;
	char	to_write;

	i = 0;
	j = 0;
	to_write = '0';
	while (j < 9)
	{
		while (i < 9)
		{
			to_write = sudoku[i][j] + '0';
			write(1, &to_write, 1);
			if (i < 8)
				write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
		i = 0;
	}
}

int	count_solutions(int x, int y, int sol_cnt, int sudoku[9][9])
{
	int	n;

	n = 1;
	if (x == 9)
	{
		x = 0;
		if (++y == 9)
			return (++sol_cnt);
	}
	if (sudoku[x][y] != 0)
		return (count_solutions(x + 1, y, sol_cnt, sudoku));
	while (n < 10 && sol_cnt < 2)
	{
		if (check_col_row(x, y, sudoku, n)
			&& check_box((x / 3 + (y / 3) * 3), sudoku, n))
		{
			sudoku[x][y] = n;
			sol_cnt = count_solutions(x + 1, y, sol_cnt, sudoku);
		}
		n++;
	}
	sudoku[x][y] = 0;
	return (sol_cnt);
}

void	solve_sudoku(int x, int y, int sudoku[9][9])
{
	int	n;

	n = 1;
	if (x == 9)
	{
		x = 0;
		if (++y == 9)
			print_s(sudoku);
	}
	if (sudoku[x][y] != 0)
		return (solve_sudoku(x + 1, y, sudoku));
	while (n < 10)
	{
		if (check_col_row(x, y, sudoku, n)
			&& check_box((x / 3 + (y / 3) * 3), sudoku, n))
		{
			sudoku[x][y] = n;
			solve_sudoku(x + 1, y, sudoku);
		}
		n++;
	}
	sudoku[x][y] = 0;
}
