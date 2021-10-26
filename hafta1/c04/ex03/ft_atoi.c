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
	while (!ft_str_is_number(src[idx]))
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

int	main()
{
	char deneme[] = "\t\v ---+--+1234ab567";
	my_atoi(deneme);
	ft_atoi(deneme);
}