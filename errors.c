#include "shell.h"

/**
 * _eputs - function
 * @str: string
 *
 * Return: void
 */

void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;

	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - function
 * @c: the caracteer
 *
 * Return: int val
 */

int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, 1);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - function
 * @c: char para
 * @fd: file descriptor
 *
 * Return: int val
 */

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - print an input
 * @str: string para
 * @fd: file descriptor
 *
 * Return: int val
 */

int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (1);
}






































