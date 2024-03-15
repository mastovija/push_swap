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

// ft_lstclear function is used to clear a linked list
// by deleting all nodes and freeing the associated memory.
// It iterates through the list, deletes each node using
// ft_lstdelone, and updates the head pointer to NULL to indicate an empty list.

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;
	t_list	*current;

	// Create a linked list with three nodes
	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	node3 = ft_lstnew("Node 3");
	// Connect the nodes
	node1->next = node2;
	node2->next = node3;
	// Initialize the head pointer
	head = node1;
	// Clear the list using ft_lstclear
	ft_lstclear(&head, del_content);
	// Print the content of each node (should be empty)
	current = head;
	while (current != NULL)
	{
		printf("Node content: %s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}
*/