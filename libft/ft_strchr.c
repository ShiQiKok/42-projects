char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if (c == s[index])
			return ((char *) &s[index]);
		index++;
	}
	if (s[index] == c)
		return ((char *) &s[index]);
	return (0);
}
