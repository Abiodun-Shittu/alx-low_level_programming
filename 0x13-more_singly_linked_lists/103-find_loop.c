#include "lists.h"

/**
 * find_listint_loop - function that finds a loop and the begining of loop
 * @head: pointer to head in function
 * Return: pointer to the begining of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (head == NULL || head->next == NULL) /*If the list is null or just 1 node*/
		return (NULL);

	tortoise = hare = head; /*Start at the same point*/

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next; /*1 step hop*/
		hare = hare->next->next;   /*2 steps hop*/
		if (tortoise == hare)
			break;
	}

	if (tortoise != hare) /* if the while ended until a NULL*/
		return (NULL);

	tortoise = head; /*re-start tortoise*/

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
