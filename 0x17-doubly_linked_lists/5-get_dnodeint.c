#include"lists.h"
/**
 * get_dnodeint_at_index - the nth node of a dlistint list
 * @head: first element
 * @index: element's number
 * Return: a node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

    dlistint_t* current = head;
    int index = 0;
    while(current != NULL && index > 0)
    {
        current = current->next;
        index--;
    }
    if (current = NULL)
        return (NULL);

    return (current);
}
