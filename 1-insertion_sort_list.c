#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order using
 *                       Insertion sort algorithm.
 * @list: Pointer to doubly linked list to be sorted.
 *
 * Description: If list is null, empty, or has only one node, function returns
 *              without making changes. Function iterates over list, inserting
 *              each node at its correct position in sorted part of list.
 *
 * Return: This function does not return a value.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *node, *tmp;

	if (!list || !*list || !(*list)->next)
		return;
	current = (*list)->next;
	while (current)
	{
		temp = current->next;
		node = current->prev;
		while (node && node->n > current->n)
		{
			tmp = node->prev;
			swap(list, &node, &current);
			print_list(*list);
			node = tmp;
		}
		current = temp;
	}
}
/**
 * swap - it swaps two freakn nodes (it's not easy)
 * @list: is the list.
 * @a_node: a node.
 * @b_node: a node!.
 * Return: nothing.
 */
void swap(listint_t **list, listint_t **a_node, listint_t **b_node)
{
	(*a_node)->next = (*b_node)->next;
	if ((*b_node)->next)
		(*b_node)->next->prev = *a_node;
	(*b_node)->next = *a_node;
	(*b_node)->prev = (*a_node)->prev;
	if ((*a_node)->prev)
		(*a_node)->prev->next = *b_node;
	else
		*list = *b_node;
	(*a_node)->prev = *b_node;
}
