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
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	tot_chars(char **str, int size)
{
	int	idx;
	int	no_of_chars;

	idx = 0;
	no_of_chars = 0;
	while (size > 0)
	{
		no_of_chars += ft_strlen(str[idx]);
		idx++;
		size--;
	}
	(void)str;
	(void)size;
	return (no_of_chars);
}

void	ft_str_cpy(char **dest, char **src)
{
	int	idx;

	idx = 0;
	while ((*src)[idx] != '\0')
	{
		(*dest)[idx] = (*src)[idx];
		idx++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		no_of_chars;
	int		idx;
	char	*temp;

	no_of_chars = 0;
	if (size == 0)
	{
		res = (char *)malloc(sizeof (char));
		res[0] = '\0';
		return (res);
	}
	no_of_chars = tot_chars(strs, size);
	no_of_chars = size + no_of_chars;
	res = (char *)malloc(no_of_chars * sizeof (char));
	temp = res;
	idx = 0;
	while (idx < size)
	{
		ft_str_cpy(&temp, &strs[idx]);
		temp += ft_strlen(strs[idx]);
		if (idx != size -1)
			{
				ft_str_cpy(&temp, &sep);
				temp++;
			}
		idx++;
	}
	res[no_of_chars - 1] = '\0';
	return (res);
}

int main(void)
{
	char ** deneme = (char **)malloc(6 * sizeof(char*));
	char* example[] = {"deneme1", "deneme2", "deneme3", "deneme4",
	"deneme5","deneme6"};

	for (size_t i = 0; i < 6; i++)
	{
		deneme[i] = (char*)malloc(25 * sizeof(char));
		deneme[i] = example[i];
	}
	char * res = ft_strjoin(6, deneme, ",");
	(void)example;
	(void)deneme;
	(void)res;
    return 0;
}