#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
void *_calloc(size_t nmemb, size_t size);
/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output..
 * @filename: pointer to the text file
 * @letters: number of bytes to read
 * Return: number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int topen, toread, towrite;
	char *buff;

	if (!filename)
		return (0);
	topen = open(filename, O_RDONLY);
	if (topen == -1)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	toread = read(topen, buff, letters);
	if (toread == -1)
		return (0);
	buff[letters] = '\0';
	towrite = write(STDOUT_FILENO, buff, toread);
	if (towrite == -1 || towrite != toread)
		return (0);
	close(topen);
	return (towrite);
}
