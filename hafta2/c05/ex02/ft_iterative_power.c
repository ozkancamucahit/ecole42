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

int	ft_iterative_power(int nb, int power)
{
	int	idx;
	int	res;

	idx = 1;
	res = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	
	while (idx <= power)
	{
		res = res * nb;
		idx++;
	}
	return (res);
}

int main()
{
	int res;

	res = ft_iterative_power(-3, -1);
	res = ft_iterative_power(-3, 0);
	res = ft_iterative_power(-3, 1);
	res = ft_iterative_power(-3, 2);
	res = ft_iterative_power(-3, 3);
	res = ft_iterative_power(0, -1);
	res = ft_iterative_power(0, 0);
	res = ft_iterative_power(0, 2);
	res = ft_iterative_power(4, -1);
	res = ft_iterative_power(4, 0);
	res = ft_iterative_power(4, 1);
	res = ft_iterative_power(4, 2);
	(void)res;
}

