#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*a_s1;
	unsigned const char	*b_s2;
	size_t				i;

	a_s1 = (unsigned const char *)s1;
	b_s2 = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (a_s1[i] != b_s2[i])
			return (a_s1[i] - b_s2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	char str[50] = "derya ucarkus";
	char str2[50] = "deniz ucarkus";
	int n = 14;
	printf("%d", ft_memcmp(str, str2, n));
}*/