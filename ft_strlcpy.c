

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > i)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	dst[] = "buenos dias";
	char	src[] = "bubulhhhhjkhdiqwudiuqgdiu";

	printf("%zu", ft_strlcpy(dst, src, 15));
}*/
