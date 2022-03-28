#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (0);
	ft_bzero(result, count * size);
	return (result);
}

/*int main()
{
	char *str = ft_calloc(sizeof(char)* 3);
}*/
