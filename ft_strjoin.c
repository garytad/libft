#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	i = 0;
	while (*s1)
	{
		str[i++] = *s1++;
	}
	while (*s2)
	{
		str[i++] = *s2++;
	}
	str[i] = '\0';
	return (str);
}