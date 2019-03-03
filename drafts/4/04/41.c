#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	
    int i, k, q, r;

    i = 0; 
    k= 1;
    q = 2;

    if (index < 0)
	{
		return (-1);
	}
    else if (index <= 1)
	{
		return (index);
	}
	else 
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
int main()
{
    int i,k,l,m,n,o, p,r;
    k = ft_fibonacci(-3);

    i = ft_fibonacci(0);
    
    
    l  = ft_fibonacci(1);
    m = ft_fibonacci(2);
    n  = ft_fibonacci(3);
    o  = ft_fibonacci(4);
    p  = ft_fibonacci(5);
    r = ft_fibonacci(33);

    printf("%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i",k,i,l,m,n,o, p, r);
    return(0);
}
