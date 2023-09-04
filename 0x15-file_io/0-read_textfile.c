#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX standard /o
 *
 * @filename: parameter
 * @letters: parameter
 * Return: numbers of letters printed. It fails, returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x = 0;
	int fd, w;
	void *buf = malloc(sizeof(char) * 2);

	if (filename == NULL || buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	for (x = 0; x < (ssize_t)letters; x++)
	{
		w = read(fd, buf, 1);
		if (w == 0)
			break;
		w = write(STDOUT_FILENO, buf, 1);
		if (w != 1)
			return (0);
	}

	close(fd);
	free(buf);

	return (x);
}
