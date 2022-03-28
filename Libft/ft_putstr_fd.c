#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

/*#include <fcntl.h>
int main()
{
	char a[] = "dero";
	int fd = open("txt.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd(a, fd);
}*/