#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147486348;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (n)
	{
		ft_putnbr_fd((n / 10), fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}
