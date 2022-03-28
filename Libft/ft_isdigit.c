#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main(void)
{
	char p = '1';
	printf("%d", ft_isdigit(p));
	return (0);
}*/