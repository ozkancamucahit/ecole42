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

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*end;
	int	idx;

	idx = 0;
	end = dest + ft_strlen(dest);
	while (src[idx] != '\0' && nb)
	{
		end[idx] = src[idx];
		idx++;
		nb--;
	}
	end[idx] = '\0';
	return (dest);
}

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		write(1, &str[idx], sizeof(char));
		idx++;
	}
}

int main(void)
{
	char s1[20] = "hello there";
    char s2[] = "general kenobi";

	char * res = ft_strncat(s1, s2, 2);
	ft_putstr(res);
	(void)res;
 
    return 0;
}