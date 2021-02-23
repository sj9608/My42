#include <stdio.h>

void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	printf("= %d =========\n", 0);

	int a = 12;
	printf("before a = %d\n", a);
	ft_ft(&a);
	printf("after a = %d\n", a);
	printf("\n\n");

	printf("= %d =========\n", 1);

	int b = 43;
	int *b1 = &b;
	int **b2 = &b1;
	int ***b3 = &b2;
	int ****b4 = &b3;
	int *****b5 = &b4;
	int ******b6 = &b5;
	int *******b7 = &b6;
	int ********b8 = &b7;
	int *********b9 = &b8;
	printf("before a = %d\n", b);
	ft_ultimate_ft(b9);
	printf("after a = %d\n", b);
	printf("\n\n");

	printf("= %d =========\n", 2);

	int c = 12;
	int d = 48;
	printf("before c = %d, d = %d\n", c, d);
	ft_swap(&c, &d);
	printf("after c = %d, d = %d\n", c, d);
	printf("\n\n");

	printf("= %d =========\n", 3);

	a = 17;
	b = 2;

	printf("before a : %d, b = %d,c = %d, d = %d\n", a, b, c, d);
	ft_div_mod(a, b, &c, &d);
	printf("after a : %d, b = %d,c = %d, d = %d\n", a, b, c, d);
	printf("\n\n");

	printf("= %d =========\n", 4);
	a = 25;
	b = 7;
	printf("before a : %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("after a : %d, b = %d\n", a, b);
	printf("\n\n");

	printf("= %d =========\n", 5);
	char *str = "hello";
	ft_putstr(str);
	printf("\n\n");

	printf("= %d =========\n", 6);
	printf("*str length is : %d\n", ft_strlen(str));
	printf("\n\n");

	printf("= %d =========\n", 7);

	int arr[5] = {5, 1, 4, 2, 3};
	int size = 5;
	int i;

	printf("before\n");
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);

	ft_rev_int_tab(arr, size);

	printf("\n\nafter\n");
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n\n");

	printf("= %d =========\n", 8);

	int arr2[5] = {5, 1, 4, 2, 3};
	printf("before\n");
	for(i = 0; i < size; i++)
		printf("%d ", arr2[i]);

	ft_sort_int_tab(arr2, size);

	printf("\n\n after\n");
	for(i = 0; i < size; i++)
		printf("%d ", arr2[i]);

	return (0);
}
