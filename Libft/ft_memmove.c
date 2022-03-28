#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (dest == src || len == 0)
		return (dest);
	if (s1 > s2)
	{	
		while (len > 0)
		{
			len--;
			s1[len] = s2[len];
		}
	}
	else if (s1 < s2)
	{
		while (len-- > 0)
		{
			*s1 = *s2;
			s1++;
			s2++;
		}
	}
	return (dest);
}

/*int main()
{
	char a[50] = "alimeyveleriniyemiyor";
	char *b;

	b = ft_memmove(a + 3, a, 4);
	printf("%s", b);
}*/