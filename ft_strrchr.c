#include "libft.h"

size_t ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return ((char *)&s[count]);
		count--;
	}
	return (0);
}

/*int main(void)
{
    char s[] = "hola que tal";

    int x = 'q';

    printf("%s", ft_strrchr(s, x));
}*/