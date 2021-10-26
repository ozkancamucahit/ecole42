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

void	ft_is_negative(int n)
{
	char	result;

	result = 'X';
	if (n < 0)
	{
		result = 'N';
		write(1, &result, sizeof(char));
	}
	else
	{
		result = 'P';
		write(1, &result, sizeof(char));
	}
}

int	main(void)
{
	ft_is_negative(3);
	ft_is_negative(-3);
	ft_is_negative((int)NULL);
	ft_is_negative(0);
	return (0);
}
