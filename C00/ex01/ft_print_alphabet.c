#include <unistd.h>

void ft_print_alphabet(void)
{
	char c = 'a';
	for(c ; c <='z' ; c++)
		write(1, &c, 1);
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
