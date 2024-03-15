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

// The ft_lstiter function provides a way to iterate over a linked list
// and apply a given function to the content of each node.
// It checks for an empty list, iterates through the list,
// and applies the function to each node's content.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_content(void *content)
{
	printf("Node content: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node2;

	// Create the first node
	head = malloc(sizeof(t_list));
	head->content = "Node 1";
	head->next = NULL;
	// Create the second node
	node2 = malloc(sizeof(t_list));
	node2->content = "Node 2";
	node2->next = NULL;
	// Connect the nodes
	head->next = node2;
	// Apply the print_content function to each node using ft_lstiter
	ft_lstiter(head, print_content);
	// Free the memory allocated for the list
	ft_lstclear(&head, free);
	return (0);
}
*/