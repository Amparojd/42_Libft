#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == 0)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack && i <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, i)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

int	main(void)
{
	char	haystack[] = "hola que tal";
	char	needle[] = "que";

	printf("%s", ft_strnstr(haystack, needle, 17));
	return (0);
}