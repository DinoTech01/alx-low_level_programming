#include "main.h"

/*
 * _puts_recursion - prints a string folowed by a new line
 * @s: The pointr variable to string s
 * Return: Always (0)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		else
	}
		{
			_putchar('\n')
		}
}
