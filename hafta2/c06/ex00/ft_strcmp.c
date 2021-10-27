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

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (*us1 == *us2 && *us1 != '\0')
	{
		us1++;
		us2++;
	}
	return ((*us1 > *us2) - (*us1 < *us2));
}

int	main(void)
{
	int	res;
	int	res2;

	res = strcmp("bb", "aa");
	printf("res with STRCMP :%d\n", res);
	res2 = ft_strcmp("bb", "aa");
	printf("res with OWN :%d\n", res2);
}
