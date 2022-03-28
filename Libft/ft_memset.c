#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
	{
		*ptr++ = c;
	}
	return (b);
}

/*int main()
{
	char a[] = "alimeyveleriniyemiyor";
	ft_memset(a, 'x', 5);
	printf("%s", a);
}*/
