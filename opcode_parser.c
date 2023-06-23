#include "monty.h"
/**
 * opcode_parser - selects the right function to execute
 * @args: array of instructions line
 * @stack: head of stack
 * @line_number: number of line the instruction is on
 */
char *op_arg = NULL;
void opcode_parser(char **args, stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t funcs[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL},
	};
		/*
		 * {"pall", pall},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{"pint", pint},
		{"swap", swap},
		{NULL, NULL}
	};
	*/

	for (i = 0; funcs[i].opcode != NULL; i++)
	{
		if (strcmp(args[0], funcs[i].opcode) == 0)
		{
			if (strcmp(args[0], "push") == 0)
				op_arg = args[1];
			funcs[i].f(stack, line_number);
		}
	}
	/*
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, args[0]);
	free(instrct);
	exit(EXIT_FAILURE);*/
}
