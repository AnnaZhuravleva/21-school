
#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
        return (1);
	}
	else
    {
        return(nb* ft_recursive_power(nb, power - 1));
    }
}

int main()
{
    int i,k,l,m,n,o;

    i = ft_recursive_power(5, 2);
    
    k = ft_recursive_power(2, 5);
    l = ft_recursive_power(10, 5);
    m = ft_recursive_power(5, 0);
    n = ft_recursive_power(5, -1);
    o = ft_recursive_power(5, 1);
    printf("%i\n%i\n%i\n%i\n%i\n%i", i,k,l,m,n,o);
    return(0);
}
