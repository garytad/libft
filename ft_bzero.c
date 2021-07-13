#include "libft.h"

void	bzero(void *s, size_t n)
{
	size_t		i;
	char		*ps;

	ps = (char *)s;
	i = 0;
	while (i < n)
	{
		ps[i] = 0;
		i++;
	}
}
