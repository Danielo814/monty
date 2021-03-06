#ifndef __MONTYH__
#define __MONTYH__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void get_func(char *command, stack_t **stack, unsigned int linenum);
void push(stack_t **stack, unsigned int linenum);
void pall(stack_t **stack, unsigned int linenum);
void freestack(stack_t *stack);
void pint(stack_t **stack, unsigned int linenum);
void pop(stack_t **stack, unsigned int linenum);
void swap(stack_t **stack, unsigned int linenum);
void add(stack_t **stack, unsigned int linenum);
void nop(stack_t **stack, unsigned int linenum);
void sub(stack_t **stack, unsigned int linenum);
#endif
