#include <unistd.h>

int	ft_hor(int x)
{
	int i;

	i = 0;
	while (i <= x)
	{
		if (i == 0 | i == x - 1)
		{
			write(1, "o", 1);
		}
		else if (i == x)
		{
			write(1, "\n", 1);
		}
		else
		{
			write(1, "-", 1);
		}
		i++;
	}
	return (0);
}

int	ft_ver(int x)
{
	int k;

	k = 0;
	while (k <= x)
	{
		if (k == 0 | k == x - 1)
		{
			write(1, "|", 1);
		}
		else if (k == x)
		{
			write(1, "\n", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		k++;
	}
	return (0);
}

int	ft_write_table(int x, int y)
{
	int k;

	k = 0;
	while (k < y)
	{
		if (k == 0 | k == y - 1)
		{
			ft_hor(x);
		}
		else
		{
			ft_ver(x);
		}
		k++;
	}
}
int	main()
{
	ft_write_table(5, 3);
	ft_write_table(5, 1);
	ft_write_table(1, 1);
	ft_write_table(1, 5);
	ft_write_table(4, 4);
	return (0);
}
