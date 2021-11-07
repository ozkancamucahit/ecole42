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
#include <unistd.h>

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
	tab[i].str = 0;
	return (tab);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
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
    ft_show_tab(res);
    //res[0].str = "lol";
	(void)example;
	(void)deneme;
	(void)res;
    return 0;
}

