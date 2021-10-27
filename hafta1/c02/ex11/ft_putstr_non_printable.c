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

int	ft_str_is_printable(char ch)
{
	if ((ch >= 0x0 && ch <= 0x1F))
		return (0);
	else
		return (1);
}

void	ft_to_hex(char *buff, int x)
{
	if (x > 15)
	{
		buff[0] = '0' + x % 16;
		buff[1] = '0' + x / 16;
	}
	if ((x >= 0 && x < 10))
	{
		buff[0] = '0';
		buff[1] = '0' + x;
	}
	else
	{
		buff[0] = '0';
		buff[1] = 'a' + x - 10;
	}
}

void	ft_putstr(char *str)
{
	char	ch;
	char	hex[2];

	while (*str)
	{
		ch = *str;
		if (ft_str_is_printable(ch))
			write(1, &ch, sizeof(char));
		else
		{
			ft_to_hex(hex, ch);
			write(1, "\\", sizeof(char));
			write(1, &hex, sizeof(char) * 2);
		}
		str++;
	}
}
