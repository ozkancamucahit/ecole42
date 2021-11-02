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

int	ft_ten_queens_puzzle(void)
{
	int		idx;
	char	ch;

	idx = 0;
	while (str[idx] != '\0')
	{
		ch = str[idx];
		if ((ch >= 'A' && ch <= 'Z'))
			str[idx] += 32;
		idx++;
	}
	return (str);
}