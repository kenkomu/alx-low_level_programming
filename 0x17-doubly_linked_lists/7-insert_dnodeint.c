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
    dlistint_t *newNode = (dlistint_t *) malloc (sizeof (dlistint_t));
    newNode->n = n;
    newNode->next = NULL;
if (h == NULL)
		return (NULL);

	int length = _dlistint_len(*h);

    if (idx == 0)
    {
      newNode->next = *h;
      *h = newNode;
    }
    else
    {
      // temp used to traverse the Linked List
      dlistint_t *temp = *h;

      // traverse till the nth node
      while (--idx)
	temp = temp->next;

      // assign newNode's next to nth node's next
      newNode->next = temp->next;
      // assign nth node's next to this new node
      temp->next = newNode;
      // newNode inserted b/w 3rd and 4th node
    }

}