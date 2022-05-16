#include <unistd.h>
/**
 *_putchar - entry point
 *@c: character to print
 *return 1
 *on error -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
