#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list
 * @head: Pointer to the pointer of the head node of the list
 * @number: The number to be insered
 * Return: Address of the new node, or NULL if failled
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (newnode == NULL)
		return (NULL);
	
	newnode->n = number;
	newnode->next = NULL;
	
	while (current != NULL && current->n < number)
	{
		prev = current;
		current = current->next;
	}

	if (prev == NULL)
	{
		newnode->next = *head;
		*head= newnode;
	}
	else
	{
		prev->next = newnode;
		newnode->next = current;
	}
	return (newnode);
}
