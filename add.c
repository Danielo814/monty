#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: pointer to stack
 * @linenum: line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int linenum)
{
	int val;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}

	val = 0;
	val += (*stack)->n;
	pop(stack, linenum);
	(*stack)->n += val;
}
