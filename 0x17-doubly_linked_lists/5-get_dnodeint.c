#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth nod of a linked list.
 * @head: pointer to first node
 * @index: node index
 * Return: returns the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		if (index == 0)
			return (temp);
		temp = temp->next;
		if (i == (index - 1) && index != 0)
		{
			return (temp);
		}
	}
	return (NULL);
}
