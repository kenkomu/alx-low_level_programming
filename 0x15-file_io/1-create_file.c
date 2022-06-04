#include "main.h"
/**
 * function that creates a file
 * @filename: name of the file
 * returns: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;
	if (filename == NULL)
		return(-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY,0600);
	if (file == -1)
		return(-1);

	while(text_content[i])
		i++;
	
	if(text_content ==NULL)
	{	
		close(file);
		return(-1);
	}
	else 
	{
		write(file, text_content, i);
	}

	close(file);
	return(1);
}	
