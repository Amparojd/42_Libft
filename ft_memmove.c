
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
		{
			str1[len] = str2[len];
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	src[] = "123456789";
	char	dst[] = "abcdefghijklm";

	printf("%s", ft_memmove(dst, src, 5));
}*/
