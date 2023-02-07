#include "lists.h"

/**
 * print_list - print elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    while(h != NULL){
        printf("%s\n", h->str);
        h = h->next;
    }
}
int main (){
    struct list_s* head = NULL;
    struct list_s* first = NULL;
    struct list_s* last = NULL;

    head = malloc(sizeof(list_t));
    first = malloc (sizeof(list_t));
    last = malloc(sizeof(list_t));

    head->str = "ken";
    head->next = first;

    first->str = "komu";
    first->next = last;

    last->str = "NJoroge";
    last->next = NULL;

    print_list(head);

    return 0;
}