#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_rec(int nb);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strlen2(char *base);
int		is_base_valid(char *base);
void	ft_putnbr1(int nbr, char *base, int base_num);
void	ft_putnbr_base(int nbr, char *base);
int		ft_strlen3(char *str);
int		is_base_valid2(char *base);
int		ft_check_strnum(char str, char *base);
int		ft_atoi_base(char *str, char *base);

int main(void)
{

	write(1, "\n", 1);
    printf("= %d =========\n", 0);
	char *str;

	str = "Hello ";
	printf("c  : %lu\n", strlen(str));
	printf("ft : %d\n", ft_strlen(str));

    printf("\n\n");

    printf("= %d =========\n", 1);

	str = "Hello World";
	ft_putstr(str);

    printf("\n\n");

    printf("= %d =========\n", 2);

	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(20000706);
	ft_putchar('\n');
	ft_putnbr(+2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);

	printf("\n\n");

	printf("= %d =========\n", 3);

	str = " 	---+--+1234ab567";
	printf("%d\n", ft_atoi(str));

    printf("\n\n");

    printf("= %d =========\n", 4);

	ft_putnbr_base(-8, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-17, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-23, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-7, "poneyvif");

    printf("\n\n");

    printf("= %d =========\n", 5);

	printf("%d\n", ft_atoi_base("a00", "0123456789abcdef"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("   	++-123456", "0123456789"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("11110001001000000", "01"));
	fflush(stdout);
	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	fflush(stdout);
    printf("\n\n");
    return (0);
}
