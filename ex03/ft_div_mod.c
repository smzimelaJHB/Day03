#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int x = a / b;
	int y = a % b;

	*div = &x;
	*mod = &y;
}

