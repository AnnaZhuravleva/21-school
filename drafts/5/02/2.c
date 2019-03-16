#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(int nb)
{
	int a;
    int b;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = - nb;
    }
    b = nb/1;
    
    a = 1;
    while (b / 10 > 0)
	{
        b = b / 10;
        a = a * 10;
	}
    while(a > 0)
    {
        ft_putchar(nb / a + '0');
        nb = nb % a;
        a = a / 10;
    }
    ft_putchar('\n');
}

int     main(void)
{
    ft_putstr(-2147483648);
    ft_putstr(120);
    /*ft_putstr(10);
    ft_putstr(1);
    ft_putstr(-1);
    ft_putstr(0);
    ft_putstr(12);
    ft_putstr(6);
    ft_putstr(-16);
    ft_putstr(-10); */
    return (0);
}