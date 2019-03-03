#include <unistd.h>
#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else
        {
            printf("\n%d\n", i);
            return(0);
        }
	}
    printf("\nprev = %d\n", i);
	return (1);
}
int main()
{
    int i,k,p,c;

    p = ft_is_prime(121);
    i = ft_is_prime(17);
    c = ft_is_prime(5);
    k = ft_is_prime(15);
    printf("\n-----\n%d\n%d\n%d\n%d", i, k, p, c);
    return(0);
}


