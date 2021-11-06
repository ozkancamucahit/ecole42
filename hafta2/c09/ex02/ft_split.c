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

#include <stdlib.h>

int	is_delim(char ch, char *char_set)
{
	int	res;

	res = 0;
	while (*char_set)
	{
		if (ch == *char_set)
		{
			res = 1;
			return (res);
		}
		char_set++;
	}
	return (0);
}

int	no_of_delims(char *str, char *delims)
{
	int	res;

	res = 0;
	while (*str)
	{
		if (is_delim(*str, delims))
			res++;
		str++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int	delims;

	delims = no_of_delims(str, charset);

	(void)delims;
	return (0);
}


int main(void)
{
	char *deneme = (char *)malloc(16 * sizeof(char));
	deneme = "abc,def-klm?moc";
	char * delims = ",-?";

	char **res = ft_split(deneme, delims);
	(void)deneme;
	(void)res;
    return 0;
}