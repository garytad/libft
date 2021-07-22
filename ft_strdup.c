#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1);
	ptr = (char *)malloc(len + 1);
	if (ptr == 0)
		return (0);
	ft_strlcpy(ptr, s1, len);
	return (ptr);
}
