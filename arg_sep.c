#include "monty.h"

/**
 * arg_sep - seperates the command retrieved by getline
 * into seperate arguments
 * @instrct: command retrieved by getline
 * Return: the array of pointers to arguments
 */
char **arg_sep(char *instrct)
{
	int args_num = 0;
	char *token;
	char **args = malloc(sizeof(char *) * 10);

	token = strtok(instrct, " \n\t\r");
	while (token != NULL)
	{
		args[args_num] = token;
		args_num++;
		token = strtok(NULL, " \n\t\r");
	}
	args[args_num] = NULL;
	/*
	 * for (i = 0; args[i] != NULL; i++)
	{
		printf("%s\n", args[i]);
	}
	*/
	return (args);
}
