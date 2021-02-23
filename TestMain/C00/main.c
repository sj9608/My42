#include <stdio.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int nb);

int main(void)
{
	printf("= %d =========\n", 0);
	ft_putchar('a');
	printf("\n\n");

	printf("= %d =========\n", 1);
	ft_print_alphabet();
	printf("\n\n");

	printf("= %d =========\n", 2);
	ft_print_reverse_alphabet();
	printf("\n\n");

	printf("= %d =========\n", 3);
	ft_print_numbers();
	printf("\n\n");

	printf("= %d =========\n", 4);
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(100);
	printf("\n");
	ft_is_negative(-24);
	printf("\n\n");

	printf("= %d =========\n", 5);
	ft_print_comb();
	printf("\n\n");

	printf("= %d =========\n", 6);
//	ft_print_comb2();
	printf("\n\n");

	printf("= %d =========\n", 7);
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-7771315);
	printf("\n");
	ft_putnbr(-20);
	printf("\n");
	ft_putnbr(-200000);
	printf("\n\n");
	
	/*
	printf("= %d =========\n", 8);
	ft_print_combn(1);
	printf("\n");
	ft_print_combn(3);
	printf("\n");
	ft_print_combn(9);
	printf("\n\n");
	*/
	return (0);
}
