#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a list.
 * @head: current head address
 * @n: number to fill the node
 * Return: number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	/* In case there isn't input a head*/
	if (head == NULL)
		return (NULL);

	/*Allocate the new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*Assign info to the new node*/
	new_node->n = n;
	new_node->next = NULL;

	/*Assign the head if the list is empty*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*If the list isn't empty, find the last node and connect the new node*/
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}
