#include "monty.h"
/**
 * pall - prints content of stack
 * @stack: head of stack
 * @line_number: the line number
 */
void pint(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *head = *stack;

	if (head == NULL)
		return;
	printf("%d\n", head->n);
}
