#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main(void)
{
	char c = '+';
	printf("%d", ft_isprint(c));
	return (0);
}*/