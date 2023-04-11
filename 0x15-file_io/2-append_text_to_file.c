#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append to
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdescript, nwrite, len;

	if (filename == NULL)
		return (-1);
	fdescript = open(filename, O_WRONLY | O_APPEND);
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
