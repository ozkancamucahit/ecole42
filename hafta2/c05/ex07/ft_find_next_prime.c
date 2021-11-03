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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

int		ft_is_primeOK(int nb)
{
	int n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int		ft_find_next_primeOK(int nb)
{
	while (nb < 2147483647 && !ft_is_primeOK(nb))
		nb++;
	return (nb);
}
int main()
{
	int res;
	int res2;

	res = ft_find_next_prime(-10);
	res2 = ft_find_next_primeOK(-10);
	res = ft_find_next_prime(-1) ;
	res2 = ft_find_next_primeOK(-1) ;
	res = ft_find_next_prime(0)  ;
	res2 = ft_find_next_primeOK(0)  ;
	res = ft_find_next_prime(1)  ;
	res2 = ft_find_next_primeOK(1)  ;
	res = ft_find_next_prime(2)  ;
	res2 = ft_find_next_primeOK(2)  ;
	res = ft_find_next_prime(3)  ;
	res2 = ft_find_next_primeOK(3)  ;
	res = ft_find_next_prime(4)  ;
	res2 = ft_find_next_primeOK(4)  ;
	res = ft_find_next_prime(5)  ;
	res2 = ft_find_next_primeOK(5)  ;
	res = ft_find_next_prime(6)  ;
	res2 = ft_find_next_primeOK(6)  ;
	res = ft_find_next_prime(7)  ;
	res2 = ft_find_next_primeOK(7)  ;
	res = ft_find_next_prime(8)  ;
	res2 = ft_find_next_primeOK(8)  ;
	res = ft_find_next_prime(9)  ;
	res2 = ft_find_next_primeOK(9)  ;
	res = ft_find_next_prime(10) ;
	res2 = ft_find_next_primeOK(10) ;
	res = ft_find_next_prime(15) ;
	res2 = ft_find_next_primeOK(15) ;
	(void)res;
}
