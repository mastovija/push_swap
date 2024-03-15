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

// This code calculates the size of a linked list
// by traversing the list from the head to the end,
// incrementing a counter for each node encountered.
// The final count is returned as the size of the linked list.

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*node;

	node = lst;
	count = 0;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
/*
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

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
	// Calculate the size of the linked list using ft_lstsize
	size = ft_lstsize(node1);
	// Print the result
	printf("Size of the linked list: %d\n", size);
	// Free the memory allocated for the linked list
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/