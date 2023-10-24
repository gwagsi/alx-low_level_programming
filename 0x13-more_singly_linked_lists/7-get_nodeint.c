#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in linked list
 * @head: The first node in linked list
 * @index: The index of node to return
 * Return: The pointer to node you're looking for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);

}
