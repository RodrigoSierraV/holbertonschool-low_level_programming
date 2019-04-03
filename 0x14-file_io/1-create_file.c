#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
/**
 * create_file - creates a file.
 * @filename: pointer to a string with the name of the archive
 * @text_content: pointer to a string with the content of the file
 * Return: 1 or -1 if fails.
 */
int create_file(const char *filename, char *text_content)
{
	int tocreate, towrite, len;

	if (!filename)
		return (-1);
	tocreate = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (tocreate == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		towrite = write(tocreate, text_content, len);
		if (towrite == -1)
			return (-1);
		if (towrite == len)
			return (1);
	}
	close(tocreate);
	return (1);
}
