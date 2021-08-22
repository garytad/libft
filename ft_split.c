#include "libft.h"
#include "stdio.h"

static int	splitcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	wordlen(char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		k;
	int		sc;

	i = 0;
	j = 0;
	sc = splitcount(s, c);
	ptr = malloc(sizeof(char *) * (splitcount(s, c) + 1));
	if (!s || !ptr)
		return (0);
	while (sc--)
	{
		k = 0;
		ptr[j] = malloc(wordlen(&s[i], c) + 1);
		while (s[i] == c)
			i++;
		while (s[i] != c)
			ptr[j][k++] = s[i++];
		ptr[j][k] = '\0';
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}
