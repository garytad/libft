#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	int		i;

	if (!s)
		return (0);
	ss = (char *)malloc(len + 1);
	if (!ss)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	while (len--)
	{
		ss[i++] = s[start++];
	}
	ss[i] = '\0';
	return (ss);
}
