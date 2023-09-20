#include "shell.h"

/**
 * _getenv - get variables enviroment.
 * @variable: parameter in
 * Return: command
 */
char *_getenv(char *variable)
{
	int i;
	char *tmp;
	char *key;
	char *value;
	char *_env;

	for (i = 0; environ[i]; i++)
	{
		tmp = _strdup(environ[i]);
		key = strtok(tmp, "=");
		if (_strcmp(key, variable) == 0)
		{
			value = strtok(NULL, "\n");
			_env = _strdup(value);
			return (_env);
		}
	free(tmp), tmp = NULL;
	}
	return (NULL);
}
