#include "sort.h"

/**
 * insertion_sort_list - sort doubly linked list using insertion sort
 * @list: the doubly linked list of integers
 *
 * Return: none
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	node = *list;
	node = node->next;
	while (node)
	{
		while (node->prev && node->n < node->prev->n)
		{
			temp = node;
			if (node->next)
				node->next->prev = temp->prev;
			node->prev->next = temp->next;
			node  = node->prev;
			temp->prev = node->prev;
			temp->next = node;
			if (node->prev)
				node->prev->next = temp;
			node->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			node = node->prev;
		}
		node = node->next;
	}
}
