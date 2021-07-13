#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;	

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i])
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
