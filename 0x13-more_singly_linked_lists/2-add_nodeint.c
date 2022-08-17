#include "lists.h"

/**
 * add_nodeint - adds a node at the begining of a list.
 * @head: current head address
 * @n: number to fill the node
 * Return: the adress of new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* In case it isn't imput a head*/
	if (head == NULL)
		return (NULL);

	/*Allocate the new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*Fill the new node*/
	new_node->n = n;
	new_node->next = *head;

	/*Assign the new node as head*/
	*head = new_node;

	return (new_node);
}
