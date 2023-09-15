

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	dst[] = "siempre dice";
	char	src[] = "nunca";

	printf("%s", ft_memcpy(dst, src, 5));
}*/
