#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int delta;
	int z;

	z = 1;
    delta = 0;
	while (z <= nb / 2)
	{
		delta = nb - z * z;
		if (delta == 0)
		{
			printf("%i", z);
            return (z);
		}
		z++;
	}
	return (0);
}

int main()
{
    ft_sqrt(121);
    return(0);
}


