#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c);
int	*ft_ultimate_range(int **range, int min, int max);

int main()
{
    int **a;
    int i;
    int c;

    c = 0;

    ft_ultimate_range(&a,5,15);
    return(0);
}
