#include <stdio.h>
#include <string.h>
#include <unistd.h>



int main(void)
{
    printf("= %d =========\n", 0);

    printf("\n\n");

    printf("= %d =========\n", 1);

    printf("\n\n");

    printf("= %d =========\n", 2);

	printf("\n\n");

	printf("= %d =========\n", 3);

    printf("\n\n");

    printf("= %d =========\n", 4);

	int	index;

	index = 0;
	while (index < 16)
	{
		printf("fibonacci(%d) = %d\n", index, ft_fibonacci(index));
		index++;
	}
	printf("%d", ft_fibonacci(46));

    printf("\n\n");

    printf("= %d =========\n", 5);

    printf("\n\n");
    return (0);
}

