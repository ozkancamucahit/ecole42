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
    if (index < 0)
        return (-1);
    if (index <= 1)
        return (index);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{    
    int res;
    res = ft_fibonacci(-10);
    res = ft_fibonacci(-1);
    res = ft_fibonacci(-3);
    res = ft_fibonacci(0);
    res = ft_fibonacci(1);
    res = ft_fibonacci(2);
    res = ft_fibonacci(3);
    res = ft_fibonacci(4);
    res = ft_fibonacci(5);
    res = ft_fibonacci(6);
    res = ft_fibonacci(7);
    res = ft_fibonacci(8);
    (void)res;
    return 0;    
}  