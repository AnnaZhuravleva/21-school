#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
    ft_putchar('\n');
}

int     main(void)
{
    ft_putstr("fgygshvjs!^&^$");
    return (0);
}