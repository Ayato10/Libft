#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\v'
		|| *str == '\f' || *str == '\n')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
		if (result * sign < -2147483648)
			return (0);
		if (result * sign > 2147483647)
			return (-1);
	}
	return (result * sign);
}

/*
int main()
{
	char *str = "125a783";
	printf("%d", ft_atoi(str));
}*/
