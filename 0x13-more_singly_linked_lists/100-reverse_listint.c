#include <stdib.h>
#include <stdio.h>
#include"lists.h"

/**
 * @listint_t - a function that reverses a listint_t linked list
 * @not allowed to use more than 1 loop.
 * @not alloewd - use malloc, free or arrays
 * @declare max two variables in a funtion
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	struct listint_t prev = NULL;
	struct listint_t current = *head;
	struct listint_t next = NULL;
	while ( current != NULL) 
	{
		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	**head = prev;
}

void push (listint_t **head, int new_data)
{
	struct listint_t new_node
		 new_node->data = new_data;
    new_node->next = (**head);
    (**head) = new_node;
}

/* Function to print linked list */
void printList(struct Node* head)
{
    struct listint_t temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

/* Driver code*/
int main()
{
    /* Start with the empty list */
    struct listint_t head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);

    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nReversed Linked list \n");
    printList(head);
    getchar();
}
