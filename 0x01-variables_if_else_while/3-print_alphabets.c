#include <stdio.h>
/**
 * main - main block 
 * Description: print letters in lowercase
 * and then in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	char c = 'A';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
