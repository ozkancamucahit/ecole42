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
int	ft_sqrt(int nb)
{
	int	half;

	if (nb < 0)
		return (0);
	half = nb / 2;
	while (half != 0)
	{
		if (half * half == nb)
			return (half);
		half--;
	}
	
	return (0);
}

int main()
{
	int res = ft_sqrt(121);
	printf("res :%d\n", res);
}
