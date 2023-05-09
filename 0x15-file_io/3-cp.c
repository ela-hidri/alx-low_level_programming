 #include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - copy file
 * @argv: arg vector
 * @argc: arg count
 *
 * Return: always success
 */
int main(int argc, char* argv[])
{
	int ft, ff, fr, fw, fct, fcf;
	char * buffer;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	ff = open(argv[1], O_RDONLY);
	fr = read(ff, buffer, 1024);
	ft = open(argv[2], O_CREAT |O_TRUNC | O_WRONLY, 0664);

	do
	{
		if (ff < 0 || fr < 0)
		{
                	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
               	 	free(buffer);
                	exit(98);
        	}
		fw = write(ft, buffer, fr);
		
		if (ft < 0 || fw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			free(buffer);
			exit(99);
		}
		fr = read(fr, buffer, 1024);
		ft= open(argv[2], O_WRONLY | O_APPEND);
	}
	while (fr > 0);
	free(buffer);
	if ((fct = close(ft)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fct);
		exit(100);
	}
	 if ((fcf = close(ff)) < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fcf);
                exit(100);
        }
	return (0);
}