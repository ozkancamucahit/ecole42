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
#include <ctype.h>

int	ft_isalpha(int c)
{
	char	*letter;
	char	*str;
	
	str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	letter = str;
    while(*letter != '\0' && *letter != c)
        ++letter;
    if (*letter != '\0')
        return (1);
    return (0);
}


int main()
{
	char c;
	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

	c = '3';
	printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

	c='-';
	printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));

	return 0;
}