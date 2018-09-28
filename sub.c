#include "monty.h"
/**
 * sub - subtracts the top element of the stack
 * from the second top element of stack
  * @stack: pointer to stack
 * @linenum: line number
 * Return void
 */
void sub(stack_t **stack, unsigned int linenum)
{
	int val;

	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short", linenum);
		exit(EXIT_FAILURE);
	}
	val = 0;
	val += (*stack)->n;
	pop(stack, linenum);
	(*stack)->n -= val;
}
