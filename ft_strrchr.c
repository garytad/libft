#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*ptr;

	i = ft_strlen(str);
	ptr = 0;
	while (str[i] != c)
		i--;
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
