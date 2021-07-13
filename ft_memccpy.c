#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char const	*psrc;
	char		*pdst;
	size_t		i;

	psrc = (char const *)src;
	pdst = (char *)dst;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == (char)c)
			return (dst + i + 1);
		i++;
	}
	return (dst);
}
