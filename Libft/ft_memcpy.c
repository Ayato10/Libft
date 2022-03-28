#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*int main()
{
	char src[50] = "alilermeyveleriniyemiyor";
	char *ret;
	ret = ft_memcpy(src + 4, src, 9);
	printf("%s", ret);
}*/
