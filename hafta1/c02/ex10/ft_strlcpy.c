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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*d;
	char	*e;
	char	*s;

	d = dest;
	e = d + size;
	s = src;
	while (*s != '\0' && d < e)
	{
		*d = *s;
		d++;
		s++;
	}
	if (d < e)
		*d = 0;
	else if (size > 0)
		d[-1] = 0;
	while (*s != '\0')
		s++;

	return s - src;
}
int main()
{
	char dest[] = "src sr src";
	char src[] 	= "deneme deneme dest";

	ft_strlcpy(dest, src, 11);

}