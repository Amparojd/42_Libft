
char	*ft_strdup(const char *s)
{
	char	*buffer;
	int		pos;

	pos = 0;
	buffer = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (s[pos])
	{
		buffer[pos] = s[pos];
		pos++;
	}
	buffer[pos] = '\0';
	return (buffer);
}       