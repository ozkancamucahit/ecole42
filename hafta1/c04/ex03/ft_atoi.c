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

int	ft_str_is_number(char ch)
{
	if ((ch >= '0' && ch <= '9'))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *src)
{
	int				idx;
	unsigned int	no_of_minus;
	int				number;

	idx = 0;
	no_of_minus = 0;
	number = 0;
	while (!ft_str_is_number(src[idx]) && src[idx] != '\0')
	{
		if (src[idx] == '-')
			no_of_minus++;
		idx++;
	}
	while (ft_str_is_number(src[idx]))
	{
		number = number * 10 + (src[idx] - '0');
		idx++;
	}
	if (no_of_minus % 2 != 0)
		number *= -1;
	return (number);
}

int		ft_atoiOK(char *str)
{
	int c;
	int s;
	int res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}

int main()
{
	int res, res2;
	res = ft_atoi(" ");
	res2 = ft_atoiOK(" ");
	(void)res;
	(void)res2;
}
