#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be read
 * @text_content: the text inside the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (i = 0; *(text_content + i) != '\0'; i++)
		;

	write(file, text_content, i);
	close(file);
	return (1);
}
