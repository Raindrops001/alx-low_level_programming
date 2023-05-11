#include "main.h"

/**
 * append_text_to_file - This appends a text at the end of every file.
 * @filename: a pointer to the name of the file.
 * @text_content: The string to be added at the end of the each file.
 *
 * Return: - -1, if the filename is NULL or function fails
 *         - -1, if the file doesn't exist the user lacks the write permissions
 *         - 1, Otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
