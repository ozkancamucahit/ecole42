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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*us1 != *us2)
			if (*us1 < *us2)
				return (-1);
		else
			return (1);
		else if (*us1 == '\0')
			return (0);
		us1++;
		us2++;
		n--;
	}
	return (0);
}

int	main(void)
{
	int	res;
	int	res2;
	int	res3;

	res = strncmp("klmnA", "klmnC", 4);
	printf("res with STRNCMP :%d\n", res);
	res2 = ft_strncmp("klmnA", "klmnC", 4);
	printf("res with OWN :%d\n", res2);
	res3 = strncmpOwn("klmnA", "klmnC", 4);
	printf("res with OWN :%d\n", res3);
}
