#include	<unistd.h>

void	init(char *buf)
{
	buf[0] = '0';
	buf[1] = '0';
	buf[2] = '0';
	buf[3] = '1';
}

void ft_putchar(char *buf)
{
	char comma;
	char space;

	comma = ',';
	space = ' ';
	write(1, &buf[0], 1);
	write(1, &buf[1], 1);
	write(1, &space, 1);
	write(1, &buf[2], 1);
	write(1, &buf[3], 1);
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb2(void)
{
	char buf[4];
	char comma;
	char space;

	init(buf);
	while (buf[0] != '9' || buf[1] != '7')
	{
			while (buf[2] <= '9')
			{
				while (buf[3] <= '9')
				{
					ft_putchar(buf);
					buf[3]++;
				}
				buf[3] = 0;
				buf[2]++;
			}
			if (buf[2] == '9')
				buf[1]++;
			buf[2] = '0';
		}
		buf[0]++;
	}
	write(1, "98 99", 5);
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
