#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters:  the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *c;

	if (filename == NULL)
	{
		return (0);
	}
	fo = open(filename, O_RDONLY);
	if (fo < 0)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		free(c);
		return (0);
	}
	fr = read(fo, c, letters);
	if (fr < 0)
	{
		free(c);
		return (0);
	}
	fw = write(STDOUT_FILENO, c, letters);
	if (fw < 0)
	{
		free(c);
		return (0);
	}
	free(c);
	close(fo);
	return (fw);
}
