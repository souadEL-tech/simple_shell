#include "shell.h"

/**
 * _putchar_cisfun - check the code.
 * Return: void.
 */

void _putchar_cisfun(void)
{
	_putchar('#');
	_putchar('c');
	_putchar('i');
	_putchar('s');
	_putchar('f');
	_putchar('u');
	_putchar('n');
	_putchar('$');
	_putchar(' ');


}

/**
 * calls - check the code.
 * @array: double pointer.
 * @line: pointer
 * @exit_stat: variable
 * Return: void
 */

int calls(char **array, char *line, int exit_stat)
{
	exit_check(array, line, exit_stat);
	env_check(array);
	if (access(array[0], X_OK) == 0)
		exit_stat = execute_line(array[0], array);
	else
		path_finder(array);
	return (exit_stat);

}

/**
 * main - check yhe code.
 * Return: return 0
 */

int main(void)
{
	int exit_stat = -1, is_interactive = isatty(STDIN_FILENO);
	char *line = NULL, **array;
	size_t len = 0;

	while (1)
	{
		if (is_interactive)
			_puthchar_cisfun();
		if (getline(&line, &len, stdin) == -1)
		{
			if (is_interactive)
			{
				perror("getline error");
				free(line);
				exit(EXIT_SUCCESS);
			}
			free(line);
			break;
		}
		if (line[0] == '\n' || spaces_tabs_check(line) == 0)
		{
			free(line);
			line = NULL;
			continue;
		}
		array = string_storage(line);
		if (clear_check(array) == 0)
		{
			free(line);
			line = NULL;
			free_2D(array);
			continue;
		}
		exit_stat = calls(array, line, exit_stat);
		free(line);
		line = NULL;
		free_2D(array);
	}

	return (0);
}
