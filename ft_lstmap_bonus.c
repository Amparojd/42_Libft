/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:43:09 by ampjimen          #+#    #+#             */
/*   Updated: 2023/10/03 17:48:06 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta. */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*target;
	t_list	*elem;
	void	*set;

	target = NULL;
	while (lst)
	{
		set = f(lst->content);
		elem = ft_lstnew(set);
		if (!elem)
		{
			del(set);
			ft_lstclear(&target, del);
			return (NULL);
		}
		ft_lstadd_back(&target, elem);
		lst = lst->next;
	}
	return (target);
}
