/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:36:57 by amdemuyn          #+#    #+#             */
/*   Updated: 2023/09/15 19:31:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char)c != ((unsigned char *)s)[i]))
		i++;
	if (i == n)
		return (NULL);
	return ((void *)s + i);
}

/*int	main(void)
{
	char	s[] = "esternocleidomastoideo";
	int	c;

	c = 'a';
	printf("%s", ft_memchr(s, c, 15));
	return (0);
}*/
