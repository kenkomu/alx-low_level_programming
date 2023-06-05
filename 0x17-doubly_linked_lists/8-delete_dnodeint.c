#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of linked list
 * @head: first element
 * @index: element number
 * Return: error code
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    dlistint_t *before, *current;
    unsigned int i = 0;

    current = *head;

    if (current == NULL) {
        return -1;  // List is empty, deletion failed
    }

    if (index == 0) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return 1;  // Deletion successful
    }

    while (i < index) {
        before = current;
        if (current->next == NULL) {
            return -1;  // Index is out of bounds, deletion failed
        }
        current = current->next;
        i++;
    }

    before->next = current->next;
    if (current->next != NULL) {
        current->next->prev = before;
    }
    free(current);
    return 1;  // Deletion successful
}