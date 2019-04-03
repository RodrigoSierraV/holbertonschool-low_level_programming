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
 * append_text_to_file -  appends text at the end of a file.
 * @filename: pointer to a string with the name of the archive
 * @text_content: pointer to a string with the content of the file
 * Return: 1 or -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int toapp, towrite, len = 0;

	if (!filename)
		return (-1);
	toapp = open(filename, O_WRONLY | O_APPEND);
	if (toapp == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		towrite = write(toapp, text_content, len);
		if (towrite == -1)
			return (-1);
		if (towrite == len)
			return (1);
	}
	close(toapp);
	return (1);
}
