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

char			*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (src[i])
	{
		size++;
		i++;
	}
	copy = malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int				ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

t_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*tab;

	if (!(tab = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}

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
    //res[0].str = "lol";
	(void)example;
	(void)deneme;
	(void)res;
    return 0;
}
