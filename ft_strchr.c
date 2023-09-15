#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 256)
		c %= 256;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "buenosw";
	char	x[] = "buenos";
	int	c;

	c = 'w';
	printf("%s", ft_strchr(s, c));
	printf("\n%s", ft_strchr(x, c));
	return (0);
}*/