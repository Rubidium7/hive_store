/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_sudoku.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjunttil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:57:02 by jjunttil          #+#    #+#             */
/*   Updated: 2022/07/10 21:09:16 by jjunttil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_SUDOKU_H
# define SOLVE_SUDOKU_H
# include <unistd.h>

int		count_solutions(int x, int y, int sol_cnt, int sudoku[9][9]);
void	solve_sudoku(int x, int y, int sudoku[9][9]);

#endif
