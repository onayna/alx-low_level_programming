#include "main.h"

int main(void)
{
	int n = 0;
	char name[8] = "_putchar";

	while (n < 8)
	{
		_putchar(name[n]);
		n++;
	}
	_putchar('\n');
	return (0);
