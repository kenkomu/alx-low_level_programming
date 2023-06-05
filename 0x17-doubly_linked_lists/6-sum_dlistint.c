#include"lists.h"
/**
 * sum_dlistint - sum of all the data of a dlistint list
 * @head: first element
 * Return: sum of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    int sum = 0;

    if(current == NULL)
    {
        return(NULL);
    }
    else
    {
        sum += current->n;
        current = current->next;
    }
    return (sum);
}