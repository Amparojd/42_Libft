#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i; //iterador para dst
	size_t	j; //iterador para src

	i = 0;
	j = 0;
	if (dstsize == 0 && (!dst || !src)) 
		return (0);
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

int	main(void)
{
	char	dst[] = "buenos días";
	char	src[] = "buenas";
	printf("%zu", ft_strlcat(dst, src, 30));
}
