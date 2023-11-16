#include "shell.h"

/**
 * env_check -check the code
 * @array: a double pointer
 * Return: no return (void function)
 */

void env_check(char **array)
{
	int j, l;

	if (_strlen(array[0]) == _strlen("env") && _strcmp(array[0], "env") == 0)
		for (j = 0; environ[j] != NULL; j++)
		{
			for (l = 0; environ[j][l] != '\0'; l++)
				_putchar(environ[j][l]);
			_putchar('\n');
		}

}

/**
 * clear_check -the code check
 * @array: a double pointer
 * Return: return int val
 */


int clear_check(char **array)
{
	if (_strlen(array[0]) == _strlen("clear") && _strcmp(array[0], "clear") == 0)
	{
		system("clear");
		return (0);
	}

	return (1);

}


/**
 * exit_check -the code check
 * @array: double pointer
 * @line: pointer
 * @exit_stat: variable
 * Return: return nothing (void function)
 */

void exit_check(char **array, char *line, int exit_stat)
{
	int tmp;

	if (_strlen(array[0]) == _strlen("exit") && _strcmp(array[0], "exit") == 0)
	{
		if (array[1] != NULL)
		{
			tmp = atoi(array[1]);
			free_2D(array);
			free(line);
			exit(tmp);
		}
		else if (exit_stat == -1)
		{
			free_2D(array);
			free(line);
		}
		free_2D(array);
		free(line);
		exit(exit_stat);
	}
}


/**
 * spaces_tabs_check -the code check
 * @line: pointer
 * Return: int val
 */

int spaces_tabs_check(char *line)
{
	size_t i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == ' ' || line[i] == '\t')
			i++;
		else
			break;
	}

	if (i == strlen(line) - 1)
		return (0);
	return (1);
}


