#include "main.h"

/**
 * _errorWriteDisplay - display error for a specific action
 *
 * @prmFileName: file name
 */
void _errorWriteDisplay(char *prmFileName)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", prmFileName);
	exit(EXIT_WRITE_ERROR);
}

/**
 * _errorReadDisplay - display error for a specific action
 *
 * @prmFileName: file name
 */
void _errorReadDisplay(char *prmFileName)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", prmFileName);
	exit(EXIT_READ_ERROR);
}

/**
 * _checkFile - check file
 *
 * @prmDestFileName: destination file name
 * @prmSourceFileName: source file name
 */
void _checkFile(char *prmDestFileName, char *prmSourceFileName)
{
	if (!prmDestFileName)
		_errorWriteDisplay(prmDestFileName);
	if (!prmSourceFileName)
		_errorReadDisplay(prmSourceFileName);
}

/**
 * _copy - copy a file to another one
 *
 * @prmFileNameDest: destination file name
 * @prmFileNameSource: source file name
 */
void _copy(char *prmFileNameDest, char *prmFileNameSource)
{
	int fdFrom, fdTo, fdRead, fdWrite, fdClose;
	char buffer[BUFFER_SIZE];

	fdFrom = open(prmFileNameSource, O_RDONLY);
	if (fdFrom == -1)
		_errorReadDisplay(prmFileNameSource);
	fdTo = open(
		prmFileNameDest,
		O_CREAT | O_WRONLY | O_TRUNC,
		DEFAULT_WRITE_RIGHTS
	);
	if (fdTo == -1)
		_errorWriteDisplay(prmFileNameDest);
	fdRead = read(fdFrom, buffer, BUFFER_SIZE);
	if (fdRead == -1)
		_errorReadDisplay(prmFileNameSource);
	while (fdRead > 0)
	{
		fdWrite = write(fdTo, buffer, fdRead);
		if (fdWrite == -1)
			_errorWriteDisplay(prmFileNameDest);
		fdRead = read(fdFrom, buffer, BUFFER_SIZE);
		if (fdRead == -1)
			_errorReadDisplay(prmFileNameSource);
	}
	fdClose = close(fdFrom);
	if (fdClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(EXIT_CLOSE_ERROR);
	}
	fdClose = close(fdTo);
	if (fdClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdTo);
		exit(EXIT_CLOSE_ERROR);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * @argc: argument's number
 * @argv: argument's array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(EXIT_WRONG_PARAMETER);
	}

	_checkFile(argv[2], argv[1]);

	_copy(argv[2], argv[1]);

	return (0);
}
