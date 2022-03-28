#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main(void)
{
	int i;
	int c;

	i = 'A';
	while (i <= 'Z')
	{
		c = ft_tolower(i);
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/