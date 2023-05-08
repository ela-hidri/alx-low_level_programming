#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
	}
	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo < 0)
		return (-1);
	fw = write(fo, text_content, l);
	if (fw < 0)
		return (-1);
	close(fo);
	return (1);
}
