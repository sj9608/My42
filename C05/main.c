#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <math.h>

int		ft_iterative_factorial(int nb);
int	    ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_recursive(int nb, int n_1, int n_2);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

int	is_prime(int prime) // 테스트용 sqrt로 소수판별한것
{
	int	i;
	int	sq;

	if (prime <= 1)
		return (0);
	sq = (int)sqrt(prime);
	for (i = 2; (i <= sq) && (prime % i != 0); i++);
	return (i > sq);
}

int main(void)
{
    printf("= %d =========\n", 0);
    int n;

	n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_iterative_factorial(n));
		n++;
	}
    printf("\n\n");

    printf("= %d =========\n", 1);

    n = -2;
	while (n < 7)
	{
		printf("fact(%d) = %d\n", n, ft_recursive_factorial(n));
		n++;
	}

    printf("\n\n");

    printf("= %d =========\n", 2);

    printf("10^2 = %d\n", ft_iterative_power(10, 2));
	printf("10^0 = %d\n", ft_iterative_power(10, 0));
	printf("10^-1 = %d\n", ft_iterative_power(10, -1));
	printf("10^5 = %d\n", ft_iterative_power(10, 5));

	printf("\n\n");

	printf("= %d =========\n", 3);

    printf("10^2 = %d\n", ft_recursive_power(10, 2));
	printf("10^0 = %d\n", ft_recursive_power(10, 0));
	printf("10^-1 = %d\n", ft_recursive_power(10, -1));
	printf("10^5 = %d\n", ft_recursive_power(10, 5));

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

    int number;

	number = -2;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));

    printf("\n\n");

    printf("= %d =========\n", 6);

	// int	results[2];
	int	count;

	// number = 0;
	count = 0;
	// while (number < 50000)
	// {
	// 	results[0] = is_prime(number);
	// 	results[1] = ft_is_prime(number);
	// 	printf("is_prime(%d) = %d  --  %d\n", number, results[1], results[0]);
	// 	if (results[0] != results[1])
	// 		return (1);
	// 	number++;
	// 	if (results[0])
	// 		count++;
	// }
	printf("is_prime(%d) = %d\n", INT_MAX, is_prime(INT_MAX));
	printf("first 50'000 number, %d prime\n", count);
	return (0);

    printf("\n\n");

    printf("= %d =========\n", 7);

    index = -2;
	while (index < 100)
	{
		printf("find_next_prime(%d) = %d\n", index, ft_find_next_prime(index));
		index++;
	}
	printf("find_next_prime(%d) = %d\n", INT_MAX, ft_find_next_prime(INT_MAX));

    printf("\n\n");

    printf("= %d =========\n", 8);

    printf("\n\n");

    return (0);
}

