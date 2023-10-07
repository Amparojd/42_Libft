/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:43:09 by ampjimen          #+#    #+#             */
/*   Updated: 2023/10/07 13:26:54 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Devuelve el último nodo de la lista. */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*int main ()
{
t_list	*node = ft_lstnew("hola");
t_list	*node1 = ft_lstnew("como");
t_list	*node2 = ft_lstnew("estas");
t_list	*node3 = ft_lstnew("tu");

node->next = node1;
node1->next = node2;
node2->next = node3;
node3->next = NULL;
printf("%s", ft_lstlast(node)->content);
return (0);
}*/
