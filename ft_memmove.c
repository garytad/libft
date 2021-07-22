#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	char const	*psrc;
	char		*temp;
	size_t		i;
	size_t		j;

	if (src == 0 && dst == 0)
		return (0);
	temp = 0;
	pdst = (char *)dst;
	psrc = (char const *)src;
	i = 0;
	while (i < len)
	{
		temp[i] = psrc[i];
		i++;
	}
	j = 0;
	while (j < len)
	{
		pdst[j] = temp[j];
		j++;
	}
	return (dst);
}
