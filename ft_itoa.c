#include "libft.h"

static int	find_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nlen;
	int		ncpy;

	ncpy = n;
	nlen = find_int_len(n);
	str = malloc(nlen + 1);
	if (!str)
		return (0);
	if (ncpy == 0)
		return (ft_strdup("0"));
	if (ncpy == -2147483648)
		return (ft_strdup("-2147483648"));
	if (ncpy < 0)
	{
		str[0] = '-';
		ncpy = -ncpy;
	}
	while (ncpy)
	{
		str[--nlen] = ncpy % 10 + '0';
		ncpy /= 10;
	}
	str[find_int_len(n)] = '\0';
	return (str);
}
