#include <unistd.h>

int		abs(int n)
{
	return n < 0 ? -n : n;
}

int		promissing(int *cols, int level)
{
	int i;
	int offset;

	i = 0;
	while (i < level - 1)
	{
		offset = cols[i] - cols[level];
		if (cols[i] == cols[level])
			return (0);
		else if (level - 1 == abs(offset))
			return (0);
		i++;
	}
	return (1);
}

int		queens(int **board, int level, int n)
{
	int **cols;
	int i;
	int j;

	i = 0;
	j = 0;
	cols = board;
	if (!(promissing(cols, level)))
		return (0);
	else if (level == n)
		return (1);
	else
	{
		while (i < n)
		{
			cols[j][level + 1] = i;
			if (queens(cols, level + 1, n))
				return (1);
			i++;
		}
		return (0);
	}
}

int		ft_ten_queens_puzzle(void)
{
	int count;
	int board[10][10];


}
