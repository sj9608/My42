#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int arr[6] = {5, 3, 2, 1, 6, 4};
	int size = 6;
	
	printf("before arr = ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');

	printf("after arr =  ");	
	ft_rev_int_tab(arr, size);
	
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return (0);
}
