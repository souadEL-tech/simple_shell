#include "shell.h"

/**
 * _erratoi - converts a stirng to integer
 * @s: the string
 * Return: int val
 */

int _erratoi(char *s)
{
	int i = 0;
	unsigned long int result = 0;

	if (*s == '+')
		s++;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			if (result > INT_MAX)
				return (-1);

		}
		else
			return (-1);
	}

	return (result);

}
/**
 * print_error - printd an error message
 * @info: parameter
 * @estr: error string
 * Return: void
 */


void print_error(info_t *info, char *estr)
{
	_eputs(info->fname);
	_eputs(": ");
	print_d(info->line_count, STDERR_FILENO);
	_eputs(": ");
	_eputs(info->argv[0]);
	_eputs(": ");
	_eputs(estr);
}


















/**
 * print_d - function prints a decimal
 * @input: the input
 * @fd: file description
 *
 * Return: int val
 */






















