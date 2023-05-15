#include <stdio.h>
#include "main.h"

/**
 * main - print a number of argument passed into it
 * @argc : integer counter
 * @argv: char arguments values
 * @i : integer loop counter
 * Return: 0 in success
 */

int main(int argc, char *argv)
{
	int i;
	for (i = 1; i < argc ; i++)
	{
		printf("%s /n", argv[i]);
	}
	return (0);
}
