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

// The ft_lstlast function takes a pointer to the head of a linked list
// (lst) as input and returns a pointer to the last node of the list.

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*lastNode;

	// Create a linked list with three nodes
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node1->content = "Node 1";
	node1->next = node2;
	node2->content = "Node 2";
	node2->next = node3;
	node3->content = "Node 3";
	node3->next = NULL;
	// Find the last node of the linked list using ft_lstlast
	lastNode = ft_lstlast(node1);
	// Print the content of the last node
	if (lastNode != NULL)
		printf("Content of the last node: %s\n", (char *)lastNode->content);
	else
		printf("The linked list is empty.\n");
	// Free the memory allocated for the linked list
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/