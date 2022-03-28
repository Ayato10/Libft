#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s)
		return (NULL);
	result = (char *)malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*char my_f(unsigned int i, char str)
{
	printf("%d%c\n", i, str);
	return (0);
}

int main()
{
 	char str[10] = "gezinti";
    printf("%s", ft_strmapi(str, my_f));
	return(0);
}*/
