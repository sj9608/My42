
void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i++ < size)
	{
		j = 0;
		while (++j < size)
		{
			if (tab[j] < tab[j-1])
				ft_swap(&tab[j], &tab[j-1]);
		}
	}
}
