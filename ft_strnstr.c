#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		nlen;
	char		*hay;

	hay = (char *)haystack;
	if (!(*needle))
		return (hay);
	nlen = ft_strlen(needle);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (needle[j] == hay[i + j])
		{
			j++;
		}
		if (j == nlen)
			return (hay + i);
		i++;
	}
	return (0);
}
