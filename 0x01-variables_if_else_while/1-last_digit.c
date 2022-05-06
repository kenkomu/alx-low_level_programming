#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;
	i = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 5)
	{
		printf("Last digit of %d is %i and is greater than 5",n,i);
	}
	if (i == 0)
        {
                printf("Last digit of %d is 0 and is greater than 5",n);
        }
	if (i < 6 $$ i!=0)
        {
                printf("Last digit of %d is %i and is greater than 5",n,i);
        }

	return (0);
