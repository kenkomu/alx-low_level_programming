#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: first element
 * @idx: element's number
 * @n: number
 *
 * Return: he address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL) {
        return NULL;  // Invalid input, return NULL
    }

    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL) {
        return NULL;  // Failed to allocate memory for the new node
    }

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = NULL;


    if (idx == 0) {
        // Insert at the beginning
        newNode->next = *h;
        if (*h != NULL) {
            (*h)->prev = newNode;
        }
        *h = newNode;
    } else {
        dlistint_t *current = *h;
        unsigned int currentIdx = 0;

        while (current != NULL && currentIdx < idx) {
            current = current->next;
            currentIdx++;
        }

        if (currentIdx < idx) {
            // Index is out of bounds, cannot insert
            free(newNode);
            return NULL;
        }

        newNode->next = current;
        newNode->prev = current->prev;
        if (current != NULL) {
            current->prev->next = newNode;
        }
        current->prev = newNode;
    }

    return newNode;
}