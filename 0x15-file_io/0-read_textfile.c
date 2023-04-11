#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to be read and printed
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if succesful or 0 if file can not be opened or read, if file is NULL
 * or if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *content;
	ssize_t nread, nprint;
	FILE *filep;

	if (filename == NULL)
		return (0);
	filep = fopen(filename, "r");
	if (filep == NULL)
		return (0);
	content = malloc(sizeof(char) * letters + 1);
	if (content == NULL)
		return (0);
	nread = fread(content, sizeof(char), letters, filep);
	fclose(filep);
	if (nread == 0)
	{
		free(content);
		return (0);
	}
	content[nread] = '\0';
	nprint = fwrite(content, sizeof(char), nread, stdout);
	free(content);
	if (nread != nprint)
		return (0);
	return (nread);
}
