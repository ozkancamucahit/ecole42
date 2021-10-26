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

void	ft_seperate(void)
{
	char	seperator;
	char	comma;

	seperator = ' ';
	comma = ',';
	write(1, &comma, sizeof(char));
	write(1, &seperator, sizeof(char));
}

void	ft_write_digits(int hundreds, int tens, int ones)
{
	char	ascii_value_hundreds_place;
	char	ascii_value_tens_place;
	char	ascii_value_ones_place;

	ascii_value_hundreds_place = '0' + hundreds;
	ascii_value_tens_place = '0' + tens;
	ascii_value_ones_place = '0' + ones;
	write(1, &ascii_value_hundreds_place, sizeof(char));
	write(1, &ascii_value_tens_place, sizeof(char));
	write(1, &ascii_value_ones_place, sizeof(char));
	if (hundreds == 7 && tens == 8 && ones == 9)
		return ;
	else
		ft_seperate();
}

void	ft_print_comb(void)
{
	int		hundreds_place;
	int		tens_place;
	int		ones_place;

	hundreds_place = 0;
	while (hundreds_place <= 9)
	{
		tens_place = hundreds_place + 1;
		while (tens_place <= 9)
		{
			ones_place = tens_place + 1;
			while (ones_place <= 9)
			{
				ft_write_digits(hundreds_place, tens_place, ones_place);
				ones_place++;
			}
			tens_place++;
		}
		hundreds_place++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
