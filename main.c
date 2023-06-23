#include "monty.h"
/**
 * main - entry point
 * @ac: number of arguments in CLI
 * @av: array of arguments
 * Return: 0 success
 */


int main(int ac, char **av)
{
	FILE *monty;
	char *instrct;
	unsigned int line_number = 0;
	char **args;
	static stack_t **stack;

	if (ac != 2)
		error(av[1], 1);

	monty = fopen(av[1], "r");
	if (monty == NULL)
		error(av[1], 2);

	while (1)
	{
		instrct = get_opcode(monty);
		line_number++;
		if (instrct == NULL)
			return (1);
		args = arg_sep(instrct);

		if (args[0] == NULL)
			continue;
		/*
		 * if (strcmp(args[0], "push") == 0)
			op_arg = args[1];
		 check if instruction is allowed or not and execute it
		 */
		opcode_parser(args, stack, line_number);
	}
	free(instrct);
	return (0);
}
