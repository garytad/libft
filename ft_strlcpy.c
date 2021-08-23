#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	i = 0;
	while (src[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < len)
		dst[dstsize - 1] = '\0';
	else
		dst[i] = '\0';
	return (len);
}
