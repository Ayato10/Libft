#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>
int main()
{
	int fd = open("txt.txt", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd(10, fd);
}*/
