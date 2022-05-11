#include <stdio.h>
#include "main.h"
/**
 *_memcpy() function copies n bytes
 *@src: source memory area
 *dest: destination memory area
 *return (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
for (i=0; i<n; i++)
	*(dest+i) =(src+i);

return(dest);
}
 
