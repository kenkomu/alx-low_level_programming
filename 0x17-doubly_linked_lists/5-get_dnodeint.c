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
  
    // the index of the
    // node we're currently
    // looking at
    int count = 0;
    while (current != NULL) {
        if (count == index)
            return (current->n);
        count++;
        current = current->next;
    }
  
    /* if we get to this line,
       the caller was asking
       for a non-existent element
       so we assert fail */
    assert(0);
}