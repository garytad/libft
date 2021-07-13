#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	char const	*psrc;
	size_t		i;

	pdst = (char *)dst;
	psrc = (char const *)src;
	i = 0;
	while (i < len)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
