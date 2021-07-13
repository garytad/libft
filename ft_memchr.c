#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	ps = (unsigned char *)s;
	i = 0;
	while (n > 0 && ps[i])
	{
		if (ps[i] != c)
			i++;
		if (ps[i] == c)
			return (ps + i);
	}
	return (0);
}
