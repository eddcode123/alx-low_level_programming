#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to create.
 * @text_content: string to wtite to created file.
 *
 * Return: 1 on sucesses
 * or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	/* declaire varibles to be used */
	int fd;
	ssize_t wt;

	/* check if filename is null */
	if (filename == NULL)
		return (-1);
	/* open file with rw permission */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/*check if open failed */
	if (fd == -1)
		return (-1);
	/* find lenof text */
	if (!text_content)
		text_content = "";

	/* write file */
	wt = write(fd, text_content, strlen(text_content));

	/* check for errors */
	if (wt == -1)
		return (-1);

	close(fd);


	return (1);
}
