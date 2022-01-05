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

int	isprint(int c)
{
	return (c >= ' ' && c != 127);
}

int	main(void)
{
	char c;

	c = 0x20;
	printf("\nResult when uppercase alphabet is passed: %d", isprint(c));

	c = '3';
	printf("\nResult when 3 is passed: %d", isprint(c));

	c='\n';
	printf("\nResult when - character is passed: %d", isprint(c));

	return 0;
}