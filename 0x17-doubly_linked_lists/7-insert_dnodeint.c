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
	dlistint_t *new, *before;
	int length;

	new = _createNode(n);

	if (h == NULL || new == NULL)
		return (NULL);

	length = _dlistint_len(*h);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx > (unsigned int) length)
	{
		return (NULL);
	}
	else
		before = _get_nodeint_at_index(*h, idx - 1);

	new->prev = before;
	new->next = before->next;

	if (before->next == NULL)
		return (add_dnodeint_end(h, n));
	before->next->prev = new;
	before->next = new;

	return (new);
}