
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}

/*int	main(void)
{
	char	s[] = "hello world";

	ft_bzero(s, 2);
	write(1, s, 12);
	return (0);
}*/
