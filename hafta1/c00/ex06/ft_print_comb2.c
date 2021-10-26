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

#include <unistd.h>

void	ft_write_digits(int tens, int ones)
{
	char	ascii_value_tens_place;
	char	ascii_value_ones_place;

	ascii_value_tens_place = '0' + tens;
	ascii_value_ones_place = '0' + ones;
	write(1, &ascii_value_tens_place, sizeof(char));
	write(1, &ascii_value_ones_place, sizeof(char));
}

void	ft_write_pairs(int tens_fst, int ones_fst, int tens_snd, int *ones_snd)
{
	ft_write_digits(tens_fst, ones_fst);
	write(1, " ", 1);
	ft_write_digits(tens_snd, *ones_snd);
	if (tens_fst == 9 && ones_fst == 8 && tens_snd == 9 && *ones_snd == 9)
	{
		(*ones_snd)++;
		return ;
	}
	write(1, ", ", 2);
	(*ones_snd)++;
}

void	ft_set_to_zero(int *tens_fst, int *ones_fst, int *ones_snd)
{
	*tens_fst = 0;
	*ones_fst = 0;
	*ones_snd = 1;
}

void	ft_print_comb2(void)
{
	int	tens_fst;
	int	ones_fst;
	int	tens_snd;
	int	ones_snd;

	ft_set_to_zero(&tens_fst, &ones_fst, &ones_snd);
	while (tens_fst <= 9)
	{
		ones_fst = 0;
		while (ones_fst <= 9)
		{
			tens_snd = tens_fst;
			while (tens_snd <= 9)
			{
				while (ones_snd <= 9)
					ft_write_pairs(tens_fst, ones_fst, tens_snd, &ones_snd);
				tens_snd++;
				ones_snd = 0;
			}
			ones_fst++;
			ones_snd = ones_fst + 1;
		}
		tens_fst++;
		ones_snd = 0;
	}
}
