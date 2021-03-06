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
#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (*us1 == *us2 && *us1 != '\0' && n)
	{
		us1++;
		us2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((*us1 > *us2) - (*us1 < *us2));;
}

int main(void)
{
	char s1[] = "";
    char s2[] = "hel";
	
	int res = ft_strncmp(s1, s2, 3);
	(void)res;
 
    return 0;
}
