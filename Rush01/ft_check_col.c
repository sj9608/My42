#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// 넘겨 받은 인자의 유효성 검사
int		is_input_valid(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			if (*argv[i] >= '1' && *argv[i] < '4')
				argv[i]++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int index;
	char **arr;

	printf("%d\n", argc);
	// while (index < argc)
	// {
	// 	while (*argv[index])
	// 	{
	// 		write(1, argv[index]++, 1);
	// 	}
	// 	write(1, "\n", 1);
	// 	++index;
	// }

	if ((argc - 1) != 16)
		return (0);
	else if (is_input_valid(argc, argv))
	{

	}
	return (0);
}
