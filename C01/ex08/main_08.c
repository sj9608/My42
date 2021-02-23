
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[5] = {1, 4, 2, 5, 3};
	int size = 5;
	
	printf("before tab : ");
	for(int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	
	ft_sort_int_tab(tab, size);

	printf("\nafter tab : ");
	for(int i = 0; i < size; i++)
		printf("%d ", tab[i]);

	return (0);
}
