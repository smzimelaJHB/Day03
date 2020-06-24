#include <unistd.h>

void ft_ultimate_div_mode(int *a , int *b)
{
	*a = &a / &b;
	*b = &a % &b;
}



