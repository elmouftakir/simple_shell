#include "shell.h"

/**
 * main - PROGRAM SHELL
 * @argc: Unused arg.
 * @argv: arg[0].
 * Return: always return 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	char *buffer = NULL, **command;
	int pointer, i, count = 0;

	signal(SIGINT, sig_handler);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, ":) ", 3);
		buffer = val_getline();
		count++;
		if (!buffer)
			continue;
		pointer = _memory(buffer);
		command = fun_strtok(buffer, pointer);
		exit1(buffer, command);
		i = env1(buffer, command);

		if (i == 0 || command == 0)
			continue;
		fun_fork(buffer, command, argv, count);
	}
	return (0);
}

