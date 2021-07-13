#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char const	*psrc;
	char		*pdest;
	size_t		i;

	psrc = (char const *)src;
	pdest = (char *)dest;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
