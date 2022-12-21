#include "shell.h"
/**
* main - This is a "Simple" Shell project
* Return: always 0
*/

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
		interactive();
	else
		no_interactive();
	return (0);
	fflush(stdin);
}
