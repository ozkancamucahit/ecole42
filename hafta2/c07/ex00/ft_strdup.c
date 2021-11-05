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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_str_cpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;

	dup = NULL;
	len = ft_strlen(src);
	dup = (char *)malloc(1 + sizeof(char) * len);
	if (dup == NULL)
		return ((char *) NULL);
	dup = ft_str_cpy(dup, src);
	return (dup);
}

int main(void)
{
	char lol[] = "-123";
	char *str = ft_strdup(lol);
	str[0] = 'a';
	(void)str;
    return 0;
}

