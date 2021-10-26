
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
        len++;
        str++;
    }
	return (len);
}


void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, sizeof(char));
		str++;
	}
}

int main()
{
    char lol [] = "deneme";
    ft_strlen(&lol[0]);
    ft_putstr(&lol[0]);
}
