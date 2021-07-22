#include "libft.h"

int	main(void)
{
	char	s1[10] = "aaaaaa";
	char	s2[10] = "bbbbbb";

	ft_strlcpy(s1, s2, 6);
	printf("%s", s1);
}
