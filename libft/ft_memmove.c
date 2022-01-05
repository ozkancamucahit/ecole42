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

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*pdest;
	const char		*psrc;
	char			*temp;
	unsigned int	idx;
	
	idx = 0;
	char	*s = (char *)src;
	(void)s;
	psrc = (const char *)src;	
	pdest = (char *)dest;
	temp = (char *)malloc(sizeof(char) * n);
	if (temp == NULL)
		return (NULL);
	while (idx < n)
	{
		temp[idx] = psrc[idx];
		idx++;
	}
	idx = 0;
	while (idx < n)
	{
		pdest[idx] = temp[idx];
		idx++;
	}
	free(temp);
	return (dest);
}

void	*ft_memmoveOK(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}

/**
 * @brief 
 * Use for possible overlapping scenarious.
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void *my_memmove(void *dest, const void *src, unsigned int n)
{
    //unsigned char isCopyRequire = 0;  //flag bit
    char *pcSource =(char *)src;
    char *pcDstn =(char *)dest;
    // return if pcDstn and pcSource is NULL
    if ((pcSource == NULL) &&(pcDstn == NULL))
    {
        return NULL;
    }
    // overlap buffer
    if((pcSource < pcDstn) && (pcDstn < pcSource + n))
    {
        for (pcDstn += n, pcSource += n; n--;)
        {
            *--pcDstn = *--pcSource;
        }
    }
    else
    {
        while(n--)
        {
            *pcDstn++ = *pcSource++;
        }
    }
    return dest;
}

int main()
{
    char str1[50] = "I am going from Delhi to Gorakhpur";
    char str2[50] = "I am going from Delhi to Gorakhpur";
    //Use of memmove
    printf( "Function:\tmemmove with overlap\n" );
    printf( "Orignal :\t%s\n",str1);
    printf( "Source:\t\t%s\n", str1 + 5 );
    printf( "Destination:\t%s\n", str1 + 11 );
    memmove( str1 + 11, str1 + 5, 29 );
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%ld characters\n\n", strlen( str1 ) );
    //Use of memcpy
    printf( "Function:\tmymemmove with overlap\n" );
    printf( "Orignal :\t%s\n",str2);
    printf( "Source:\t\t%s\n", str2 + 5 );
    printf( "Destination:\t%s\n", str2 + 11 );
    my_memmove( str2 + 11, str2 + 5, 29 );
    printf( "Result:\t\t%s\n", str2 );
    printf( "Length:\t\t%ld characters\n\n", strlen( str2 ) );
    return 0;
}