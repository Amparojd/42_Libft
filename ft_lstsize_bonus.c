/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:43:09 by ampjimen          #+#    #+#             */
/*   Updated: 2023/10/07 13:27:09 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cuenta el número de nodos de una lista. */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*int main ()
{
t_list	*node1 = ft_lstnew("MJ");
t_list	*node2 = ft_lstnew("MJ");
t_list	*node3 = ft_lstnew("MJ");
t_list	*node4 = ft_lstnew("MJ");

node1->next = node2;
node2->next = node3;
node3->next = node4;
node4->next = NULL;
printf("%d", ft_lstsize(node1));
return (0);
}*/
