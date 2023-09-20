#include "shell.h"
/**
 * _strstr - searches a string for any of a set of bytes
 * @haystack: first occurrence of the character
 * @needle: array string
 *Return: 0
 */

char *_str_str(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}

/**
 * _itoa - function convert the integer to string
 * @num: input the number
 *Return: the string
 */


char *_itoa(int num)
{
	unsigned int tmp;
	int div = 1, i = 0;
	char *str;

	str = malloc(sizeof(char) * 11);
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[i++] = '-';
		tmp = num * -1;
	}
	else
		tmp = num;

	while (tmp / div > 9)
		div *= 10;
	while (div != 0)
	{
		str[i] = (tmp / div) + '0';
		tmp %= div;
		div /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

