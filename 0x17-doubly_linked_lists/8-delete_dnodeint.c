#include "lists.h"
/**
 * delete_dnodeint_at_index - function that delete a node at index position
 * of a linked list
 * @head: pointer to head in function
 * @index: index or position to be added
 * Return: 1 success -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int nodes;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;

	for (nodes = 0; current != NULL && nodes < index; nodes++)
		current = current->next;
	if (current == NULL)
		return (-1);
	if (*head == current)
		*head = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
