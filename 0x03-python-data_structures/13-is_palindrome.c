#include "lists.h"

/**
 * reverseList - Function to reverse a linked list
 * @head: start of list
 * Return: address to a list-node
 */
listint_t *reverseList(listint_t *head)
{
	listint_t *prev = NULL;
	listint_t *current = head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	return (prev);
}

/**
 * is_palindrome - Function to check if a linked list is a palindrome
 * @head: start of list-nodes
 * Return: 1 if is_palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *secondHalf;
	listint_t *prev_slow = *head;
	int isPalindrome = 1;

	if (*head != NULL && (*head)->next != NULL)
	{
		/* Move 'fast' to the middle and 'slow' to the start of the second half*/
		while (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			prev_slow = slow;
			slow = slow->next;
		}

		/*Reverse the second half of the list*/
		if (fast != NULL)
		{
			slow = slow->next;
		}
		secondHalf = reverseList(slow);

		/*Compare the first and second halves of the list*/
		while (secondHalf != NULL)
		{
			if ((*head)->n != secondHalf->n)
			{
				isPalindrome = 0;
				break;
			}
			*head = (*head)->next;
			secondHalf = secondHalf->next;
		}
		/* Restore the reversed second half to its original order */
		prev_slow->next = reverseList(secondHalf);
	}

	return (isPalindrome);
}
