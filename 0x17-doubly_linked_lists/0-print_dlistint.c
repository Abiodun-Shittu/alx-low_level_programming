#include "lists.h"

/**
 * print_dlistint -function that prints all the elements of a list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	if (h == NULL)
		return (0);
	temp = h;

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
