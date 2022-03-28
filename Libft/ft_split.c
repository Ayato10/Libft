#include "libft.h"

static size_t	wordcount(char *p, char m)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (p[i] != '\0')
	{
		while (p[i] == m)
			i++;
		if (p[i] == '\0')
			break ;
		count++;
		while (p[i] != m && p[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	charcount(char *p, char m)
{
	size_t	i;

	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == m)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	m;

	if (!s)
		return (NULL);
	m = 0;
	i = 0;
	p = (char **)malloc(sizeof(char *) * (wordcount((char *)s, c) + 1));
	if (!p)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		p[m] = ft_substr(s, i, charcount((char *)&s[i], c));
		m++;
		i += charcount((char *)&s[i], c);
	}
	p[m] = NULL;
	return (p);
}

/*int main()
{
        char **a;
        a = ft_split("....merhaba.......ben......dero....", '.');
		printf("%s\n%s\n%s", a[0], a[1], a[2]);
}*/
