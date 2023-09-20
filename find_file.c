#include "shell.h"

/**
 * get_path - get path
 * @command: command get
 * Return: file
 */

char  *get_path(char *command)
{
	int i, pointer;
	char *delim = ":=", *tokens, **folder, *buffer;
	char *file = NULL;

	i = 0;
	buffer = _getenv("PATH");

	pointer = _memory1(buffer);
	folder = malloc(sizeof(char *) * pointer);

	if (folder == NULL)
	{
		perror("error allocated memory");
		return (NULL);
	}
	tokens = strtok(buffer, delim);

	i = 0;
	while (tokens)
	{
		folder[i] = tokens;
		tokens = strtok(NULL, delim);
		i++;
	}
	folder[i] = NULL;
	file = f_function(folder, command);
	i = 0;
	free(folder);
	return (file);
}

/**
 * f_function - found directory
 * @folder: Double pointer at the directory
 * @command: command found
 * Return: command
 */

char *f_function(char **folder, char *command)
{
	int i = 0;
	char *temp;

	temp = malloc(sizeof(char) * 2);

	if (temp == NULL)
		return (NULL);

	while (folder[i])
	{
		DIR *d;
		struct dirent *dir;

		d = opendir(folder[i]);

		if (d)
		{
			while ((dir = readdir(d)) != NULL)
			{
				if ((_strcmp(dir->d_name, command)) == 0)
				{
					_strcpy(temp, folder[i]);
					_strcat(temp, "/");
					_strcat(temp, dir->d_name);
					closedir(d);
					return (temp);
				}
			}
			closedir(d);
			i++;
		}
	}
	free(temp);
	return (NULL);
}
