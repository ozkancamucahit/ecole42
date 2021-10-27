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
#include <string.h>
char	*ft_strcpy(char *dest, char *src)
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

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	offset;
	unsigned int	src_index;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	src_index = 0;
	while (src[src_index] != '\0')
	{
		if (offset == size - 1)
			break;
		dest[offset] = src[src_index];
		offset++;
		src_index++;
	}
	dest[offset] = '\0';
	return (d_len + s_len);

}

int main()
{
	char first[] = "This is ";
    char last[] = "a potentially long string";
	char buffer[30];
	ft_strcpy(buffer, first);
	int res = ft_strlcat(buffer, last, sizeof(buffer));
	
	printf("res :%d, sizeof first :%ld\n", res, sizeof(first));
	printf("res str:%s\n", first);
}