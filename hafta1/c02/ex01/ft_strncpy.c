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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx] != '\0' && idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}

int main(void)
{
    char* source = "Uzun bir string";
    char destination[7];
 
    unsigned int num = 6;
 
    ft_strncpy(destination, source, num);
 
    return 0;
}
