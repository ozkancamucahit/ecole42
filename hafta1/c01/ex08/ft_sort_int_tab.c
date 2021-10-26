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

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	iter;
	int	elem;

	iter = 0;
	while (iter < size)
	{
		elem = 0;
		while (elem < size - 1)
		{
			if (tab[elem] > tab[elem + 1])
				ft_swap(&tab[elem], &tab[elem + 1]);
			elem++;
		}
		iter++;
	}
}

void print(int* tab, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	
}

int main()
{
	int arr[6] = {7,2,5,1,8,4};
	print(arr, 6);
	ft_sort_int_tab(arr, 6);
	printf("\n");
	print(arr, 6);

	return 0;
}