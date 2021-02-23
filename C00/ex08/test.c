
#include <unistd.h>

void	ft_print_combn(int n)
{
	char c[n];
	int index;

	index = 0;
	while (index < n)
	{
		while (c[0] != '9' - n + 1)
		{
			c[i] = '0' + i;
			write(1, &c[i], 1);
			write(1, ", ", 2);
			if (c[0] == n-
