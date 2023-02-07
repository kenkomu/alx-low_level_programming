#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * 
 * @param h 
 * @return size_t 
 */
size_t print_list(const list_t *h)
{
    while(h != NULL){
        printf("%s\n", h->str);
        h = h->next;
    }
};
int main (int argc, const char *argv[]){
    struct list_s* first = NULL;
    first = malloc(sizeof(list_t));
    first->next = NULL;
    first->str = "hello";
    return 0;

}