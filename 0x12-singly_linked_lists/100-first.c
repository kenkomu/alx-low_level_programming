#include <stdio.h>

void _construct(void) __attribute__((constructor));

/**
 * _construct - constructor function
 */
void _construct(void)
{
	char line1[] = "You're beat! and yet, you must allow,";
	char line2[] = "I bore my house upon my back!";

	printf("%s\n%s\n", line1, line2);
}
