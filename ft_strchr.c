#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	while ((str[i]) && (str[i] != c))
		i++;
	ptr = 0;
	j = 0;
	if (str[i] == c)
	{
		while (str[i])
		{
			ptr[j] = str[i];
			i++;
			j++;
		}
		ptr[j] = '\0';
	}
	return (ptr);
}
