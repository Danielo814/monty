#include "monty.h"
/**
 * push - pushes an element to stack
 * @stack: address of pointer
 * @linenum: line number
 * Return: void
 */
void push(stack_t **stack, unsigned int linenum)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	char *tok = strtok(NULL, " \t\n");
	int i;
	int retval;

	for (i = 0; tok[i]; i++)
	{
		if (i == 0 && tok[i] == '-')
			continue;
		if (isdigit(tok[i]) == 0)
			retval = 1;
		else
		{
			retval = 0;
		}
	}
	if (tok == NULL || retval == 1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", linenum);
		exit(EXIT_FAILURE);
	}
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (!stack)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(tok);
	new_node->prev = NULL;
	new_node->next = *stack;
	if ((*stack) != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/**
 * pall - prints all elements
 * @stack: pointer to stack
 * @linenum: linenum of operation
 * Return: void
 */
void pall(stack_t **stack, unsigned int linenum)
{
	stack_t *temp;
	(void) linenum;

	if (stack == NULL || (*stack) == NULL)
		return;
	for (temp = *stack; temp != NULL; temp = temp->next)
		printf("%d\n", temp->n);
}
