#include"main.h"
/**
 * get_endianness - order of sequences of bytes
 *
 * Return: result
 */
int get_endianness(void)
{
	int num = 1;
	char *byte = (char *) &num;

	return ((int) *byte);
}
int main{
	int endianness = get_endianness();

	if (endianness == 0)
	{
		printf("This machine uses big-endian byte order.\n");
	} else
	{
	printf("This machine uses little-endian byte order.\n");
	}
	return (0);
}
