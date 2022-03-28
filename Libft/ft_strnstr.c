#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != 0 && j + i < len)
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
	char as1[] = "alimeyveleriniyemiyor";
	char as2[] = "meyve";
	printf("%s", ft_strnstr(as1, as2, 9));
	return (0);
}*/
