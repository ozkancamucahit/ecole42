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

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

int		ft_iterative_factorialOK(int nb)
{
	int res;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
		res *= nb--;
	return (res);
}

int	main(void)
{
	int res, res2;
	res = ft_iterative_factorial(-1);
	res2 = ft_iterative_factorialOK(-1);
	res = ft_iterative_factorial(0);
	res2 = ft_iterative_factorialOK(0);
	res = ft_iterative_factorial(1);
	res2 = ft_iterative_factorialOK(1);
	res = ft_iterative_factorial(2);
	res2 = ft_iterative_factorialOK(2);
	res = ft_iterative_factorial(3);
	res2 = ft_iterative_factorialOK(3);
	res = ft_iterative_factorial(4);
	res2 = ft_iterative_factorialOK(4);

}
