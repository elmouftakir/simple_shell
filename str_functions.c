#include "shell.h"

/**
 * _strdup - function that returns a pointer
 * @str: array
 * Return: Pointer of a string copied
 */
char *_strdup(char *str)
{
	int i, j;
	char *string;

	if (str == NULL)
		return (0);
	i = 0;

	while (*(str + i) != '\0')
		i++;
	string = malloc(i + 1);
	if (string == 0)
		return (0);
	for (j = 0; j < i; j++)
		*(string + j) = *(str + j);
	return (string);
}

/**
 * _strcat - Function will concatenate two strings
 * @dest: caracter print
 * @src: word print
 *Return: String concatenate
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, c = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}
/**
 * _strlen - return the length of string
 * @s: caracter print
 *Return: return the number of character
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcmp - String comparate
 * @s0: String 0
 * @s1: String 1
 *Return: The diference of the two string, return 0 is the same string
 */

int _strcmp(char *s0, char *s1)
{
	int i;

	i = 0;
	while (s0[i] == s1[i] && s0[i] != '\0')
		i++;
	return (s0[i] - s1[i]);
}

/**
 * _strcpy - copy string
 * @dest: Array Copied .
 * @src: - Source of array
 * Return: the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
