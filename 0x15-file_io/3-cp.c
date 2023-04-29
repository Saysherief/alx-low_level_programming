#include "main.h"

void copy_to_file(const char *copy_from, const char *copy_to);

/**
 * main - main function
 * @argc: no of arguments passed with the executable
 * @argv: the array of strings holding the command
 * Return: 0 on success and errors on failure exits
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	copy_to_file(argv[1], argv[2]);
	return  (0);
}
/**
 * copy_to_file - copies a file from a path to a path
 * @copy_from: the file to copy from
 * @copy_to: the file to copy to
 * Return: 1 on success and error on failure
 */
void copy_to_file(const char *copy_from, const char *copy_to)
{
	int fd_from, fd_to;
	char buffer[MAX_BUFFER];
	ssize_t read_bytes, written_bytes;

	fd_from = open(copy_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", copy_from);
		exit(98);
	}
	fd_to = open(copy_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);/*rw-rw-r--*/
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", copy_to);
		close(fd_from);
		exit(99);
	}
	while ((read_bytes = read(fd_from, buffer, MAX_BUFFER)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", copy_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
		if (written_bytes != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", copy_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", copy_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
                exit(100);
        }
}
