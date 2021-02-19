#include <unistd.h>

void ft_print_numbers(void)
{
	char c;
	for(c = '0' ; c <= '9'; c++)
		write(1, &c, 1);
}
