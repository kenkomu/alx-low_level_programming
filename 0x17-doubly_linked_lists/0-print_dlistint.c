#include "lists.h"
/**
 * @brief prints all elements of dlistint_t
 * @h: pointer to the list
 * return: the number of nodes in the dlistint_t
 */
size_t print_dlistint(const dlistint_t *h);
{
    size_t size = 0;

    if(h == NULL)
        return(0);

    while(h != NULL)
    {
        printf("%d\n", h->n);
        h = h -> next;
        size++;
    }
    return(size);
}