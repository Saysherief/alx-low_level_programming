#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file to create
 * @text_content: the NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdescript, len, nwrite;
	mode_t fmode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	fdescript = open(filename, O_WRONLY | O_CREAT | O_TRUNC, fmode);
	if (fdescript == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fdescript);
		return (1);
	}
	len = strlen(text_content);
	nwrite = write(fdescript, text_content, len);
	close(fdescript);
	if (len != nwrite)
		return (-1);
	return (1);
}
