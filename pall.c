#include "monty.h"
/**
 * pall - prints content of stack
 * @stack: head of stack
 * @line_number: the line number
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (*stack == NULL)
		return;
	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
}
