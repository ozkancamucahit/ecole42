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

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

int	no_of_delims(char *str, char *charset)
{
	int	res;
	int	idx1;
	int	idx2;

	res = 1;
	idx1 = 0;
	while (str[idx1])
	{
		idx2 = 0;
		while (charset[idx2])
		{
			if (str[idx1] == charset[idx2])
				res++;
			idx2++;
		}
		idx1++;
	}
	return (res);
}

void	copy_elems(char ***res, char *str, char *charset)
{
	char	*word;
	char	*temp;
	int		idx;

	idx = 0;
	word = str;
	temp = (*res)[idx];
	while (*word)
	{
		if (!is_delim(*word, charset) && *word != '\0')
		{
			*temp = *word;
			temp++;
		}
		else
		{
			*temp = '\0';
			idx++;
			temp = (*res)[idx];
		}
		word++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		no_words;
	char	*word;
	char	**res;
	int		len;
	int		idx;

	no_words = no_of_delims(str, charset);
	res = (char **)malloc((no_words + 1) * sizeof(char *));
	idx = 0;
	len = 1;
	word = str;
	while (*word)
	{
		if (is_delim(*word, charset))
		{
			res[idx] = (char *)malloc(len * sizeof(char));
			len = 0;
			idx++;
		}
		word++;
		len++;
	}
	res[idx] = (char *)malloc(len * sizeof(char));
	copy_elems(&res, str, charset);
	return (res);
}


int main(void)
{
	char *deneme = (char *)malloc(16 * sizeof(char));
	deneme = "abcdefg,def-klm?mocoklok";
	char * delims = ",-?*";

	char **res = ft_split(deneme, delims);
	(void)deneme;
	(void)res;
    return 0;
}