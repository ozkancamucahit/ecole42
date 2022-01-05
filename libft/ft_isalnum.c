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

int	ft_isdigit(int c)
{
	char	*letter;
	char	*str;
	
	str = "0123456789";
	letter = str;
    while(*letter != '\0' && *letter != c)
        ++letter;
    if (*letter != '\0')
        return (1);
    return (0);
}

int ft_isalnum(int c)
{
    if ( ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}

int main()
{
	char c;
	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));

	c = '3';
	printf("\nResult when 3 is passed: %d", ft_isalnum(c));

	c='-';
	printf("\nResult when - character is passed: %d", ft_isalnum(c));

	return 0;
}