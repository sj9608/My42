#include <unistd.h>

void ft_print_comb(void)
{
	char i = '0';
	char comma = ',';
	char sp = ' ';
	while (i <= '6')
	{
		char j = i + 1;
		while(j <= '8')
		{
			char k = j + 1;
			while(k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				k++;
				write(1, &comma, 1);
				write(1, &sp, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "789", 3);
}

int main(void)
{
	ft_print_comb();
	return 0;
}

			
