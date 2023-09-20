#include "shell.h"

/**
 * env1 - Function the validate the variables
 * @buffer: string of getline
 * @command: is the arguments of buffer
 * Return: 1 is succes 0 is not
 */

int env1(char *buffer, char **command)
{
	int i, j, ret;

	if (command[1] == NULL)
	{
		ret = _strcmp(comand[0], "env");
		if (ret == 0)
		{
			for (i = 0; environ[i] != 	NULL; i++)
			{
				for (j = 0; environ[i][j] != '\0'; j++)
				{
					write(STDOUT_FILENO, &environ[i][j], 1);
				}
				write(STDOUT_FILENO, "\n", 1);
			}
			free(buffer);
			free(command);
			return (0);
		}
		return (1);
	}
	return (1);
}


/**
 * exit1 - Function the validate the command exit
 * @buffer: string of getline
 * @command: is the arguments the buffer
 * Return: no return
 */

void exit1(char *buffer, char **command)
{
	int ret;

		ret = _strcmp(command[0], "exit");
		if (ret == 0)
		{
			free(buffer);
			free(command);
			exit(-1);
		}
}

