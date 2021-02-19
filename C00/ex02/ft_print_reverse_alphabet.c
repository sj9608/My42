#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c = 'z';
	for(c = 'z' ; c >='a'; c--)
	{
		write(1, &c, 1);
	}
}
