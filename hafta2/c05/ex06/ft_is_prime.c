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

int	ft_is_prime(int nb)
{
	int	res;
	int	divisors;
	int	idx;

	divisors = 1;
	idx = 2;
	res = 0;
	while (idx <= nb)
	{
		if ( nb % idx == 0)
			divisors++;
		idx++;
	}
	
	if (divisors == 2)
		return (1);
	return (res);
}

int main()
{
	int res;

	res = ft_is_prime(-10);
	res = ft_is_prime(-1);
	res = ft_is_prime(0);
	res = ft_is_prime(1);
	res = ft_is_prime(2);
	res = ft_is_prime(3);
	res = ft_is_prime(4);
	res = ft_is_prime(5);
	res = ft_is_prime(6);
	res = ft_is_prime(7);
	res = ft_is_prime(8);
	res = ft_is_prime(9);
	res = ft_is_prime(10);
	res = ft_is_prime(11);
	(void)res;
}
