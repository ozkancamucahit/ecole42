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
int	ft_fibonacci(int index)
{

    if (index <= 1)
        return (index);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{    
    int res = ft_fibonacci(3);
    printf("Res : %d\n", res);    
    return 0;    
}  