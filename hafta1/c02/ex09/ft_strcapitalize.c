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

int	ft_str_is_number(char ch)
{
	if ((ch >= '0' && ch <= '9'))
		return (1);
	else
		return (0);
}

void	ft_strlowcase(char *ch)
{
	if (*ch >= 'A' && *ch <= 'Z')
		*ch += 32;
}

void	ft_strupcase(char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		*ch -= 32;
}

int	ft_str_is_alpha(char ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	word_idx;

	idx = 0;
	word_idx = 0;
	while (str[idx] != '\0')
	{
		if (ft_str_is_number(str[idx]))
			word_idx++;
		while (ft_str_is_alpha(str[idx]) || ft_str_is_number(str[idx]))
		{
			if (word_idx == 0)
				ft_strupcase(&str[idx]);
			else
				ft_strlowcase(&str[idx]);
			word_idx++;
			idx++;
		}
		idx++;
		word_idx = 0;
	}
	return (str);
}

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char * res = ft_strcapitalize(str);

	(void)res;
 
    return 0;
}
