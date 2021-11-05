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

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	idx;

	if (min >= max)
		return ((int *) NULL);
	len = max - min;
	arr = (int *)malloc(len * sizeof (int));
	if (arr == NULL)
		return ((int *) NULL);
	idx = 0;
	while (min < max)
	{
		arr[idx] = min;
		min++;
		idx++;
	}
	return (arr);
}

int main(void)
{
	int *res = ft_range(-7, 0);
	(void)res;
 
    return 0;
}
