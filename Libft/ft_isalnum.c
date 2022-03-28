#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || \
			(c >= 'a' && c <= 'z') || \
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*int main(void)
{
	char c = 'a';
	printf("%d", ft_isalnum(c));
	return (0);
}*/