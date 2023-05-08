#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file -  creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
			;
	}
	fo = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fo < 0)
		return (-1);
	fw = write(fo, text_content, l);
	if (fw < 0)
		return (-1);
	close(fo);
	return (1);
}
