#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
/**
 * main -  copies the content of a file to another file.
 * @argc: number of arguments from command-line
 * @argv: pointer to arguments from command-line
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int tocreate, topen, towrite, toread, toclose;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	tocreate = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tocreate == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	topen = open(argv[1], O_RDONLY);
	if (topen == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	toread = read(topen, buf, 1024);
	if (toread == -1)
	{		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	towrite = write(tocreate, buf, toread);
	if (towrite == -1 || towrite != toread)
	{		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	toclose = close(tocreate);
	if (toclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tocreate);
		exit(100);
	}
	return (0);
}
