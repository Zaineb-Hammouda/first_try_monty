#include "monty.h"
/**
 * get_opcode - gets the opcode from the monty bytecode file
 * @monty: file stream to monty file
 * Return: string of instruction
 */
char *get_opcode(FILE *monty)
{
	size_t n = 0;
	ssize_t read;
	static char *instrct;

	read = getline(&instrct, &n, monty);
	if (read == -1)
	{
		free(instrct);
		return (NULL);
	}
	instrct[read - 1] = '\0';

	return (instrct);
}
