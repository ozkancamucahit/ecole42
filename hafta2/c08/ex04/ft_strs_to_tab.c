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
//#include "ft_stock_str.h"

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}t_stock_str;

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
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
	(*dest)[idx] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					idx;
	int					len;

	res = (struct s_stock_str *)malloc(ac * sizeof (struct s_stock_str));
	idx = 0;
	while (idx < ac)
	{
		len = ft_strlen(av[idx]);
		res[idx].size = len;
		res[idx].str = (char *)malloc((len + 1) * sizeof (char));
		res[idx].copy = (char *)malloc((len + 1) * sizeof (char));
		ft_str_cpy(&res[idx].str, &av[idx]);
		ft_str_cpy(&res[idx].copy, &res[idx].str);
		if (idx == ac - 1)
		{
			res[idx].str = NULL;
		}
		idx++;
	}
	return (res);
}

#include <stdio.h>
int main(void)
{
	char ** deneme = (char **)malloc(6 * sizeof(char*));
	char* example[] = {"deneme1", "deneme2", "deneme3", "deneme4",
	"deneme5","deneme61"};

	for (size_t i = 0; i < 6; i++)
	{
		deneme[i] = (char*)malloc(ft_strlen(example[i]) * sizeof(char));
		deneme[i] = example[i];
	}
	//char * res = ft_strjoin(6, deneme, ",");
	struct s_stock_str	*res;
	res = ft_strs_to_tab(6, example);
	(void)example;
	(void)deneme;
	(void)res;
    return 0;
}
