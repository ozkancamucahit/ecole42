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

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
	int res;

	res = ft_recursive_power(-3, -1);
	res = ft_recursive_power(-3, 0);
	res = ft_recursive_power(-3, 1);
	res = ft_recursive_power(-3, 2);
	res = ft_recursive_power(-3, 3);
	res = ft_recursive_power(0, -1);
	res = ft_recursive_power(0, 0);
	res = ft_recursive_power(0, 2);
	res = ft_recursive_power(4, -1);
	res = ft_recursive_power(4, 0);
	res = ft_recursive_power(4, 1);
	res = ft_recursive_power(4, 2);
	(void)res;
}
