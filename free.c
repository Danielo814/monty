#include "monty.h"
/**
 * freestack - frees stack
 * @stack: pointer to stack
 * Return: void
 */
void freestack(stack_t *stack)
{
	stack_t *temp;

	if (stack == NULL)
		return;
	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
