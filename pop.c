#include "monty.h"
/**
 * pop - pops element from top of stack
 * @stack: pointer to stack
 * @linenum: line number
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int linenum)
{
	stack_t *temp;

	if (stack == NULL || (*stack) == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack", linenum);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	(*stack) = (*stack)->next;
	free(temp);
}
