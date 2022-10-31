#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text in the file
 * @letters: size of the file
 * Return: the actual numbert of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;
	char *totalsize;

	totalsize = malloc(sizeof(char) * letters);
	if (totalsize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, totalsize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, totalsize, fread);
	if (fwrite == -1)
		return (0);
	close(file);
	free(totalsize);
	return (fwrite);
}
