#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: text to add at EOF
 *
 * Return: 1 if file exist
 * or -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/* declare variables to use */
	int fd;
	ssize_t wr;

	/* check if filename is null */
	if (!filename)
		return (-1);
	/* open file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);
	/* check if open failed */
	if (fd == -1)
		return (-1);
	/* check if the text_content is null */
	if (!text_content)
		/* make it an empty string */
		text_content = "";
	/* use write to append to EOF */
	wr = write(fd, &text_content, strlen(text_content));
	/* check if write failed */
	if (wr == -1)
		return (-1);
	/* close file descriptor */
	close(fd);

	return (1);
}
