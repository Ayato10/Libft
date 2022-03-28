#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*int main()
{
	char set[] = "sadsadsadsda";
	ft_bzero(set + 4, 1);
	printf ("%s", set);
}*/
