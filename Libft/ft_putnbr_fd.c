#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln *= -1;
	}
	if (ln <= 9)
		ft_putchar_fd(ln + '0', fd);
	else
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putnbr_fd(ln % 10, fd);
	}
}
/*
#include <fcntl.h>
int main()
{
	int fd = open("txt.txt", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd(10, fd);
}*/
