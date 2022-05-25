#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen_recursion - return the length of a string
 *
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen_recursion(const char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}

/**
 * createNode - create a new node
 *
 * @prmStr: name
 *
 * Return: new element
 */
list_t *createNode(const char *prmStr)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (prmStr == NULL)
		return (NULL);

	new->str = strdup(prmStr);
	new->len = _strlen_recursion(prmStr);

	return (new);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to last element
 * @str: name
 *
 * Return: new last element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = createNode(str);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
