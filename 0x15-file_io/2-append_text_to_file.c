#include "main.h"

/**
 * append_text_to_file - A function that appends
 * text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write
 * permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, w, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (i == -1 || w == -1)
		return (-1);

	close(i);

	return (1);
}
