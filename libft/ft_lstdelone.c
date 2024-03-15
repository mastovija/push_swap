/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgarside <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:47:15 by jgarside          #+#    #+#             */
/*   Updated: 2023/06/01 12:47:20 by jgarside         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// The ft_lstdelone function is responsible for
// deleting a single node from a linked list.
// It takes care of freeing both the content
// memory and the node itself.
// The del function is used to handle the specific 
//memory deallocation of the content,
// and it is called only if it is provided and not NULL.

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del != NULL)
		del(lst->content);
	free(lst);
}
/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;

	// Create a node
	node = malloc(sizeof(t_list));
	node->content = "Example";
	node->next = NULL;
	// Delete the node using ft_lstdelone
	ft_lstdelone(node, del_content);
	// Attempt to access the deleted node (will result in undefined behavior)
	printf("Content: %s\n", (char *)node->content);
	return (0);
}
*/