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


#include <stdlib.h>
#include <stdbool.h>

bool	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\f'
			|| c == '\n' || c == '\r');
}

int		ft_split_count_word(char *str)
{
	int		index;
	int		count;

	index = 0;
	count = 0;
	while (str[index])
	{
		while (ft_is_whitespace(str[index]))
			index++;
		if (str[index] == '\0')
			break ;
		while (!ft_is_whitespace(str[index]) && str[index] != '\0')
			index++;
		count++;
	}
	return (count);
}

char	*ft_str_n_duplicate(char *str, int n)
{
	int		index;
	char	*duplicate;

	if (!(duplicate = (char *)malloc((n + 1) * sizeof(char))))
		return (NULL);
	index = 0;
	while (str[index] && index < n)
	{
		duplicate[index] = str[index];
		index++;
	}
	while (index < n + 1)
	{
		duplicate[index] = '\0';
		index++;
	}
	return (duplicate);
}

char	**ft_splitOK(char *str)
{
	int		index;
	int		words;
	char	*start;
	char	**array;

	index = 0;
	words = ft_split_count_word(str);
	if (!(array = (char **)malloc((words + 1) * sizeof(char *))))
		return (NULL);
	while (index < words)
	{
		while (ft_is_whitespace(*str))
			str++;
		if (*str == '\0')
			break ;
		start = str;
		while (!ft_is_whitespace(*str) && *str != '\0')
			str++;
		array[index] = ft_str_n_duplicate(start, str - start);
		index++;
	}
	array[index] = 0;
	return (array);
}


int main(void)
{
	//char *deneme = (char *)malloc(16 * sizeof(char));
	char *deneme = "abcdefg def klm mocoklok";
	//char * delims = " ";

	char **res = ft_splitOK(deneme);//, delims);
	(void)deneme;
	(void)res;
    return 0;
}