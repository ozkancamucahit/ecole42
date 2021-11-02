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

int	ft_strlen(char *str)
{
	int	len;
	char * ref = str;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (*str)
		str++;
	
	int len2 = str - ref;
	(void)len2;
	return (len);
}

int main()
{
	char str [] = "abc";
	int res = ft_strlen(str);

	(void)res;
}
