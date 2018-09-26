#include "monty.h"
/**
 * main - entry point to the program
 * @argc: number of arguments
 * @argv: pointer to command line arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	FILE *fp = NULL;
	char *buff = NULL;
	char *tok;
	stack_t *stack = NULL;
	unsigned int linenum = 1;
	size_t len = 1;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buff, &len, fp) != -1)
	{
		tok = strtok(buff, "  \t\n");
		if (tok != NULL)
			get_func(tok, &stack, linenum);
		linenum++;
	}
	free(buff);
	fclose(fp);
	return (0);
}
