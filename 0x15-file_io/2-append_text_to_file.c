#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * append_text_to_file - text at d end of a file
 * @filename:  to append text
 * @text_content:  appended into the file
 * Return:  an integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *filepointer = NULL;
	int values;

	filepointer = fopen(filename, "a+");

	if (filepointer == NULL || filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		values = fputs(text_content, filepointer);
		if (values < 0)
			return (-1);
	}

	fclose(filepointer);

	if (chmod(filename, 0664) != 0)
		return (-1);

	return (1);
}
