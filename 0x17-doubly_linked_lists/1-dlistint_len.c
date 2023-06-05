#include"lists.h";
/**
 * dlistint_len - number of elements in a dlistint_t linked list
 * @h: list to browse
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
