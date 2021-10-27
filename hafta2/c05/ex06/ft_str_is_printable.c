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

int	ft_str_is_printable(char *str)
{
	int		idx;
	int		result;
	char	ch;

	idx = 0;
	result = 1;
	if (str[idx] == '\0')
		return (result);
	while (str[idx] != '\0')
	{
		ch = str[idx];
		if ((ch >= 0x0 && ch <= 0x1F))
			return (0);
		else
			idx++;
	}
	return (result);
}
