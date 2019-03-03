
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 1;
    res = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		res = 1;
	}
	else while (i < power)
	{
		res = res * nb;
		i++;
	}
    printf("%i\n", res);
	return (res);
}

int main()
{
    ft_iterative_power(5, 2);
    ft_iterative_power(4, 3);
    ft_iterative_power(10, 5);
    ft_iterative_power(5, 0);
    ft_iterative_power(4, 1);
    ft_iterative_power(4, -1);
    return(0);
}
