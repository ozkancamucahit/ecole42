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

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

int main()
{
	long int c;
	c = ' ';
	printf("\nResult when uppercase alphabet is passed: %d", ft_isascii(c));

	c = '3';
	printf("\nResult when lowercase alphabet is passed: %d", ft_isascii(c));

	c = 0x80;
	printf("\nResult when non-alphabetic character is passed: %d", ft_isascii(c));

	return 0;
}