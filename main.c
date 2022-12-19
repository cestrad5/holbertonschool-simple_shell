#include "main.h"

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
		interactive();
	else
		no_interactive();
	return (0);
}