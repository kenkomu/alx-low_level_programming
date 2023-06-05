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
    if (current = NULL)
        return (NULL);

    int index = 0;
    while (current != NULL) {
        if (index == index)
            return (current->n);
        index++;
        current = current->next;
    }

    assert(0);
}