/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjunttil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 08:54:38 by jjunttil          #+#    #+#             */
/*   Updated: 2022/07/10 21:04:49 by jjunttil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"solve_sudoku.h"

int	check_input(char **argv)
{
	int	test;
	int	i;
	int	j;

	i = 1;
	j = 0;
	test = 1;
	while (i < 10 && test)
	{
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] == '.' || (argv[i][j] > '0' && argv[i][j] <= '9')))
				test = 0;
			j++;
		}
		if (j != 9)
			test = 0;
		j = 0;
		i++;
	}
	return (test);
}

void	fill_sudoku(int sudoku[9][9], char **argv)
{
	int	x;

	x = -1;
	while (x++ < 80)
	{
		if (argv[x / 9 + 1][x % 9] == '.')
			sudoku[x % 9][x / 9] = 0;
		else
			sudoku[x % 9][x / 9] = argv[x / 9 + 1][x % 9] - '0';
	}
}

int	main(int argc, char **argv)
{
	int	x;
	int	sol_cnt;
	int	sudoku[9][9];

	x = -1;
	sol_cnt = 0;
	while (x++ < 80)
		sudoku[x % 9][x / 9] = 0;
	if (argc != 10)
		write(1, "Error\n", 6);
	else if (!check_input(argv))
		write(1, "Error\n", 6);
	else
	{
		fill_sudoku(sudoku, argv);
		sol_cnt = count_solutions(0, 0, sol_cnt, sudoku);
		if (sol_cnt != 1)
			write(1, "Error\n", 6);
		else
		{
			fill_sudoku(sudoku, argv);
			solve_sudoku(0, 0, sudoku);
		}
	}
	return (0);
}
