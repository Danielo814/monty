#include "monty.h"
/**
 * get_func - checks string and executes the appropriate function
 * @command: command to execute
 * @stack: pointer to stack
 * @linenum: line number of command
 */
void get_func(char *command, stack_t **stack, unsigned int linenum)
{
	unsigned int i = 0;
	instruction_t commands[] = {
		{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add},
		{"nop", nop}, {"sub", sub},
		{NULL, NULL}
	};
	while (commands[i].opcode != NULL)
	{
		if (strcmp(commands[i].opcode, command) == 0)
		{
			commands[i].f(stack, linenum);
			return;
		}
		i++;
	}
	if (commands[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", linenum, command);
		exit(EXIT_FAILURE);
	}
}
