
#include <unistd.h>

void	write_numbers(int i)
{
	char	c;

	c = '0' + (i / 10);
	write(1, &c, 1);
	c = '0' + (i % 10);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_numbers(a);
			write(1, " ", 1);
			write_numbers(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
