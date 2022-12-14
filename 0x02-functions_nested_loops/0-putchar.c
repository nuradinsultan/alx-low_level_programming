#include "_putchar.h"

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 7; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
