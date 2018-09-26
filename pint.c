#include "monty.h"
/**
 * pint - prints top value of stack
 * @stack: pointer to stack
 * @linenum: line number
 * Return: void
 */
void pint(stack_t **stack, unsigned int linenum)
{
	if (stack == NULL || (*stack) == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", linenum);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
