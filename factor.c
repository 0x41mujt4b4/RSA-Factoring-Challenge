#include "factor.h"
#include <string.h>

/**
 * main - main function
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buffer = NULL;
	u_int64_t n, f1, f2;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <filename>\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buffer, &count, fptr)) != -1)
	{
		n = atoi(buffer);
		f1 = factorize(buffer);
		f2 = n / f1;
		buffer[strcspn(buffer, "\n")] = 0;
		printf("%s=%lu*%lu\n", buffer, f1, f2);
	}
	return (0);
}
