/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mozkanca <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:46:48 by mozkanca          #+#    #+#             */
/*   Updated: 2021/10/23 15:48:27 by mozkanca         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

static int	g_col[10];
static int	g_diag1[19];
static int	g_diag2[19];
static char	g_buff[11];

void	put_str(void)
{
	int	idx;

	idx = 0;
	while (g_buff[idx] != '\0')
	{
		write(1, &g_buff[idx], sizeof (char));
		idx++;
	}
	write(1, "\n", sizeof(char));
}

void	set_to_one(int x, int row, int n)
{
	g_col[x] = 1;
	g_diag1[x + row] = 1;
	g_diag2[x - row + n - 1] = 1;
}

void	set_to_zero(int x, int row, int n)
{
	g_col[x] = 0;
	g_diag1[x + row] = 0;
	g_diag2[x - row + n - 1] = 0;
}

void	search(int *count, int row)
{
	int	x;
	int	n;

	n = 10;
	x = 0;
	if (row == n)
	{	
		(*count)++;
		put_str();
		return ;
	}
	while (x < n)
	{
		if (g_col[x] || g_diag1[x + row] || g_diag2[x - row + n - 1])
		{
			x++;
			continue ;
		}
		g_buff[x] = row + '0';
		set_to_one(x, row, n);
		search(count, row + 1 );
		set_to_zero(x, row, n);
		g_buff[x] = 0;
		x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	count;

	count = 0;
	search(&count, 0);
	return (count);
}

int	main(void)
{
	int res = ft_ten_queens_puzzle();
	printf("res :%d\n", res);
	(void)res;
	(void)g_buff;
}
