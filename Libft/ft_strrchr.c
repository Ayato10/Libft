#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (i--)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}

/*int main()
{
	char a[] = "elanurbela";
	char *b;
	b = ft_strrchr(a, 'r');
	printf("%s", b);
}*/
