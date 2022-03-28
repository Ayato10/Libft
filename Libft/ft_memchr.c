#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*a;
	char	b;
	int		i;

	i = 0;
	a = (char *)s;
	b = (char)c;
	while (n > 0)
	{
		if (a[i] == b)
			return (&a[i]);
		a++;
		n--;
	}
	return (NULL);
}

/*int main()
{
	char a[50] = "alimeyveleriniyemiyor";
	char *b;
	
	b = ft_memchr(a, 'l', 20);
	printf("%s", b);
}*/