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

int	ft_number_of_digits(int nb)
{
	int	count;

	if (nb == 0)
		return (0);
	count = 0;
	while (nb != 0)
	{
		nb /= 10;
		++count;
	}
	return (count);
}

void	ft_write_digits(int *buffer, int no_of_digits)
{
	int		idx;
	char	digit;

	if (no_of_digits == 0)
	{
		write(1, "0", sizeof (char));
		return ;
	}
	idx = no_of_digits - 1;
	while (idx >= 0)
	{
		digit = '0' + buffer[idx];
		write(1, &digit, sizeof (char));
		idx--;
	}
}

void	ft_split_number(int nb, int no_of_digits)
{
	int	mod;
	int	buffer[10];
	int	idx;

	idx = 0;
	while (idx < 10)
		buffer[idx++] = 0;
	idx = 0;
	while (nb > 0)
	{
		mod = nb % 10;
		buffer[idx++] = mod;
		nb = nb / 10;
	}
	ft_write_digits(buffer, no_of_digits);
}

void	ft_putnbr(int nb)
{
	int				no_of_digits;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	no_of_digits = ft_number_of_digits(nb);
	ft_split_number(nb, no_of_digits);
}

int main()
{
	ft_putnbr(-2147483648);
	ft_putnbr(-21);
	ft_putnbr(21);
	ft_putnbr(0);
}