#include <unistd.h>

char	g_std[10];

int		std_check(int c)
{
	int i;
	i = 0;
	while (i < c)
	{
		if (g_std[i] >= g_std[c])
			return (0);
		i++;
	}
	return (1);
}

void	std_print(int c, int n)
{
	int r;
	if (c == n)
	{
		write(1, g_std, n);
		if (g_std[0] != '9' - n + 1)
			write(1, ", ", 2);
	}
	else
	{
		r = 0;
		while (r < 10)
		{
			g_std[c] = '0' + r;
			if (std_check(c))
				std_print(c + 1, n);
			r++;
		}
	}
}

void	ft_print_combn(int n)
{
	std_print(0, n);
}
