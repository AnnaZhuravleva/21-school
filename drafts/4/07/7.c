#include <unistd.h>
#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
    int next;

	i = 2;
    next = nb;

    while (nb >2)
    {
        while (nb % i != 0)
        {
            i++;
        }
        if (i == nb)
        {
            return(nb);
        }
        else
        {
            nb++;
            i = 2;        
        }
    }
}

int main()
{
    int i,k,p,c;

    p = ft_is_prime(121);
    i = ft_is_prime(17);
    c = ft_is_prime(5);
    k = ft_is_prime(150);
    printf("\n-----\n%d\n%d\n%d\n%d", p,i,c, k);
    return(0);
}