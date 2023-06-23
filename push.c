#include "monty.h"
/**
 * push - inserts a new element on stack/queue
 * @stack: head of stack
 * @line_number: number of the line
 */
void push(stack_t **stack, unsigned int line_number)
{
        stack_t *new = NULL;
        int m;
        /*stack_t *start = NULL;*/

        if (op_arg == NULL || (atoi(op_arg) == 0 && strcmp(op_arg, "0") != 0))
        {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
        }
        m = atoi(op_arg);
        printf("%d\n", m);
        new = malloc(sizeof(stack_t));
        if (new == NULL)
        {
                error(NULL, 4);
        }
        new->n = m;
	printf("%d\n", new->n);
        new->next = *stack;
        new->prev = NULL;
	if (*stack)
	{
		(*stack)->prev = new;
	}
	*stack = new;
        printf("%d\n", new->n);
}

