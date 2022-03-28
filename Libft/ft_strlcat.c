#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;
	size_t	orjinal;

	orjinal = size;
	total = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + orjinal);
	while (*src != 0 && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (total);
	return (0);
}

/*int main()
{
    char dst[30] = "selam derya";
    const char src[30] = "nasilsin";
	printf("%zu",ft_strlcat(dst,src, 11));
}*/
