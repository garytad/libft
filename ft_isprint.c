int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (c);
	return (0);
}
