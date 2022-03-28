#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void yazcan(unsigned int i, char *s)
{
	i = 0;
	*s = ' ';
	printf("merhaba\n");
}

int main()
{
	char s[10] = "12345";
	ft_striteri(s, yazcan);
}*/
