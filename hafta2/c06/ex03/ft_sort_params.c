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

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], sizeof(char));
		idx++;
	}
	write(1, "\n", sizeof(char));
}

int	ft_strcmp(char *str1, char *str2)
{
	unsigned char *us1;
	unsigned char *us2;
	int	res;

	us1 = (unsigned char *)str1;
	us2 = (unsigned char *)str2;
	while (*us1 && *us1 == *us2)
	{
		us1++;
		us2++;
	}
	res = (*us1 > *us2) - (*us1 < *us2);
	return (res);
}

void	ft_swap(char **a, char **b)
{
	char	temp;

	temp = **a;
	**a = **b;
	**b = temp;
}

void	ft_sort_char(char **arr, int size)
{
	int	iter;
	int	elem;

	iter = 0;
	while (iter < size)
	{
		elem = 1;
		while (elem < size - 1)
		{
			if (ft_strcmp(arr[elem], arr[elem + 1]) == 1)
				ft_swap((&arr[elem]), (&arr[elem + 1]));
			elem++;
		}
		iter++;
	}
	elem = 1;
	while (elem < size)
	{
		ft_putstr(arr[elem]);
		elem++;
	}
	
}

int	main(int argc, char **argv)
{
	ft_sort_char(argv, argc);
	return (0);
}
