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

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);

	return (nb * ft_recursive_factorial(nb - 1));
}

int		ft_recursive_factorialOK(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int res, res2;
	
	res = ft_recursive_factorial(-1);
	res2 = ft_recursive_factorialOK(-1);
	res = ft_recursive_factorial(0);
	res2 = ft_recursive_factorialOK(0);
	res = ft_recursive_factorial(1);
	res2 = ft_recursive_factorialOK(1);
	res = ft_recursive_factorial(2);
	res2 = ft_recursive_factorialOK(2);
	res = ft_recursive_factorial(3);
	res2 = ft_recursive_factorialOK(3);
	res = ft_recursive_factorial(4);
	res2 = ft_recursive_factorialOK(4);
}