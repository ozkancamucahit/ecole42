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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	char	*ref;
	
	len = ft_strlen(to_find);
    ref = to_find;
	if (len == 0)
		return (str);
    while(*str && *ref)
    {
        if (*str++ == *ref)
            ref++;
        if(*ref == '\0')
            return (str - len);
        if (len == (ref - to_find))
            ref = to_find;
    }
    return ((char*)0);
}

// returns true if `X` and `Y` are the same
int compare( char *X,  char *Y)
{
    while (*X && *Y)
    {
        if (*X != *Y) {
            return 0;
        }
 
        X++;
        Y++;
    }
 
    return (*Y == '\0');
}
 
char* strstrden(char* X, char* Y)
{
	if (*Y == 0)
		return X;
    while (*X != '\0')
    {
        if ((*X == *Y) && compare(X, Y)) {
            return X;
        }
        X++;
    }
 
    return 0;
}
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
}

char	*ft_strstrOK(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char *X = "this is string no allocated c and alloc";
    char *Y = "";

	ft_putstr(ft_strstr(X,Y));
	write(1, "\n", 1);
	ft_putstr(strstrden(X,Y));
	write(1, "\n", 1);
	ft_putstr(ft_strstrOK(X,Y));
 
    return 0;
}
