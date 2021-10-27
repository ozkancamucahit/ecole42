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
	if (nb < 0)
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
	int res = ft_recursive_power(6,1);
	printf("result :%d\n", res);
	return 0;
}
