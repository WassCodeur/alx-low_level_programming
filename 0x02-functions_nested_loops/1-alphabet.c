#include "main.h"

/**
 * main - Program that prints string
 * Return: 0
 */

int main(void)
{
	char mystring[9] = "Holberton";

	int i;

	for (i = 0; i < 9; i++)
		_putchar(mystring[i]);

	_putchar('\n');

	return (0);
}
