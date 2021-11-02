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

char	*ft_strupcase(char *str)
{
	int		idx;
	char	ch;

	idx = 0;
	while (str[idx] != '\0')
	{
		ch = str[idx];
		if ((ch >= 'a' && ch <= 'z'))
			str[idx] -= 32;
		idx++;
	}
	return (str);
}

int main(void)
{
	char  str[] = "ABCdeflk";
    char* res = ft_strupcase(str);

	(void)res;
 
    return 0;
}
