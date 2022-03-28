#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	a1;
	unsigned char	a2;

	while (n-- > 0)
	{
		a1 = *(unsigned char *)s1++;
		a2 = *(unsigned char *)s2++;
		if (a1 != a2)
			return (a1 - a2);
		if (a1 == '\0')
			return (0);
	}
	return (0);
}

/*int main()
{
	char *s1 = "derya";
	char *s2 = "uçarkuş";
	printf("%d", ft_strncmp(s1, s2, 8));
}*/
