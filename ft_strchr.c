#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	char	ch;

	ptr = (char *)s;
	ch = (char)c;
	i = 0;
	while (ptr[i] && ptr[i] != ch)
	{
		i++;
	}
	if (ptr[i] == ch)
		return (ptr + i);
	return (0);
}
