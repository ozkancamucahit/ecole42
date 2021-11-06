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
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}t_stock_str;

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], sizeof(char));
		idx++;
	}
		write(1, "\n", sizeof(char));
}

void	swap(char *c1, char *c2)
{
	char	t;

	t = *c1;
	*c1 = *c2;
	*c2 = t;
}

char	*reverse(char *buff, int i, int j)
{
	while (i < j)
	{
		swap(&buff[i], &buff[j]);
		i++;
		j--;
	}
	return (buff);
}

char	*itoa(int val, char *buff)
{
	int	idx;
	int	is_neg;
	int	n;

	is_neg = 0;
	n = val;
	if (val < 0)
	{
		is_neg = 1;
		n = val * -1;
	}
	idx = 0;
	while (n)
	{
		buff[idx++] = '0' + n % 10;
		n = n / 10;
	}
	if (idx == 0)
		buff[idx++] = '0';
	if (is_neg)
		buff[idx++] = '-';
	buff[idx] = '\0';
	return (reverse(buff, 0, idx - 1));
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		idx;
	char	buffer[12];

	idx = 0;
	while (par[idx].str != NULL)
	{
		ft_putstr(par[idx].str);
		ft_putstr(itoa(par[idx].size, buffer));
		ft_putstr(par[idx].copy);
		idx++;
	}
	
}

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
	struct s_stock_str	*res;
	res = ft_strs_to_tab(6, example);
	ft_show_tab(res);
	(void)example;
	(void)deneme;
	(void)res;
    return 0;
}