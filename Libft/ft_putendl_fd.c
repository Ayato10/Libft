#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

/*#include <fcntl.h>
int main()
{
	char s[] = "Dero";
	int fd = open("txt.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd(s, fd);
}*/