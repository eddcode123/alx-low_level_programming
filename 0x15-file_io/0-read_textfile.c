#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: path to the file
 * @letters: number of bytes to be printed
 *
 * Return: number of letters printed
 * or 0 if open,write,read and filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declare varables to use to read a file */
	int fd;
	ssize_t r, w;
	char *buff;
	/*check if filename is null */
	if (!filename)
		return (0);
	/* open file in readonly mode */
	fd = open(filename, O_RDONLY);
	/* check if open failed and if filename is null */
	if (fd == -1)
		return (0);
	/* allocate mamory to buffer */
	buff = malloc(sizeof(char) * (letters));
	/* check  of malloc failed */
	if (!buff)
		return (0);
	/* read file if open was sucessful */
	r = read(fd, buff, letters);
	/* checkif read failed */
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
		return (0);
	/* close file */
	close(fd);
	/* free buff */
	free(buff);

	return (w);
}
