
void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int temp;
	int index;
	
	index = 0;
	count = size / 2;
	while (count > 0)
	{
		temp = tab[index];
		tab[index] = tab[size-index-1];
		tab[size-index-1] = temp;
		count--;
		index++;
	}
}
