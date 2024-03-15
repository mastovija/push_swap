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

// This function adds a new node (new) to the front of a linked list (lst).
// By updating the next pointers of the nodes, it ensures that the new node is
// inserted at the beginning of the list and becomes the new first node.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*current;
	t_list	*temp;

	// Create the initial list
	list = NULL;
	// Create nodes with some sample content
	node1 = malloc(sizeof(t_list));
	node1->content = "Node 1";
	node1->next = NULL;
	node2 = malloc(sizeof(t_list));
	node2->content = "Node 2";
	node2->next = NULL;
	node3 = malloc(sizeof(t_list));
	node3->content = "Node 3";
	node3->next = NULL;
	// Add nodes to the front of the list
	ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	// Traverse the list and print the content of each node
	current = list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	// Free the memory allocated for the nodes
	current = list;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	return (0);
}
*/