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
	int	idx;

	idx = no_of_digits - 1;
	while (idx >= 0)
	{
		write(1, &buffer[idx], 1);
		idx--;
	}
}

void	ft_split_number(int nb, int no_of_digits)
{
	int	mod;
	int	buffer[10];
	int	idx;
	int	ascii_value;

	idx = 0;
	while (idx < 10)
		buffer[idx++] = 0;
	idx = 0;
	while (nb > 0)
	{
		mod = nb % 10;
		ascii_value = '0' + mod;
		buffer[idx++] = ascii_value;
		nb = nb / 10;
	}
	ft_write_digits(buffer, no_of_digits);
}

void	ft_putnbr(int nb)
{
	int				no_of_digits;
	int				min_int;
	unsigned int	min_int_holder;

	min_int = -2147483648;
	if (nb == min_int)
	{
		write(1, "-2147483648", 12);
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
