#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"
/**
 * function that converts a binary number to an unsigned int
 * @b
 *
 * return: the converted number or 0
 */

int _pow(int x,int y)
{
	if(y < 0)
	{
		return(-1);
	}
	else if (y == 0)
	{
		return(1);
	}
	else
	{
		y--;
		x = x* _pow(x,y);
		return(x);
	}
	return(0);
}
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, x, n;

	if (b == NULL)
	{
		return (0);
	}

	n = strlen(b) - 1;
	for (x = 0, i = 0; n >= x; n--)
	{
		switch (b[i])
		{
			case '1':
				sum = sum + _pow(2, n);
				i++;
				break;
			case '0':
				sum = sum + 0;
				i++;
				break;
			default:
				return (0);
		}
	}

	return (sum);
}
