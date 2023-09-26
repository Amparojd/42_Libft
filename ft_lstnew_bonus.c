/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:43:09 by ampjimen          #+#    #+#             */
/*   Updated: 2023/09/26 15:50:39 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

void a()
{
    system("leaks a.out");
}

int main()
{
    atexit(a);
    t_list *milista = ft_lstnew("hola mundo");
    t_list *milista2 = ft_lstnew("adios mundo cruel");

    milista->next = milista2;
    milista2->next = NULL;

    t_list *tmp = milista;
    while(tmp->next)
    {
         printf("%s\n", tmp->content);
         tmp = tmp->next;
    }
    
    printf("%s\n", milista->content);
    free(milista);
    free(milista2);
}