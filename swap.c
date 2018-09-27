#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to stack
 * @linenum: line number
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int linenum)
{
	stack_t *temp;
	int val;

	if (!stack | !(*stack) | !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", linenum);
		exit(EXIT_FAILURE);
	}

	temp = (*stack);
	val = temp->n;
	temp->n = temp->next->n;
	temp->next->n = val;
}
