#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*hay;

	hay = (char *)haystack;
	if (!(*needle))
		return (hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (needle[j] == hay[i + j])
		{
			j++;
		}
		if (!(needle[j]))
			return (hay + i);
		i++;
	}
	return (0);
}
