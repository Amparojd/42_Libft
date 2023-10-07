/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:43:09 by ampjimen          #+#    #+#             */
/*   Updated: 2023/10/07 13:26:42 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Toma como parámetro un nodo ’lst’ y libera la
memoria del contenido utilizando la función ’del’
dada como parámetro, además de liberar el nodo. La
memoria de ’next’ no debe liberarse. */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*void del(void* s)
{
ft_bzero(s, 9);
}
int main()
{
t_list *node = ft_lstnew(ft_strdup("hell hell"));
printf("%s\n",node->content);
ft_lstdelone(node, del);
for (int i = 0; i < 9; i++)
printf("%d",((char *)node->content)[i]);
return (0);
}*/
