#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	int		i;

	if (s == 0)
		return (0);
	ss = (char *)malloc(len + 1);
	if (ss == 0)
		return (0);
	if (start >= ft_strlen(s))
	{
		*ss = '\0';
		return (ss);
	}
	i = 0;
	while (s[start] && len)
	{
		ss[i] = s[start];
		i++;
		start++;
		len--;
	}
	ss[i] = '\0';
	return (ss);
}
