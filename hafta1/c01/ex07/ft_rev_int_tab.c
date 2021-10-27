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

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	idx_rev;
	int	temp;

	idx_rev = size - 1;
	idx = 0;
	while (idx_rev >= size / 2)
	{
		temp = tab[idx];
		tab[idx] = tab[idx_rev];
		tab[idx_rev] = temp;
		idx_rev--;
		idx++;
	}
}
