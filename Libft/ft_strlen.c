#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	asd;

	asd = 0;
	while (*s++)
		asd++;
	return (asd);
}

/*int main(void)
{
	char *str;

	str = "derya";
	printf("%zu", ft_strlen(str));
	return (0);
}*/