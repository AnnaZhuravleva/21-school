#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <xlocale.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int res;
    int index;
    int koef;

    index = 0;
    res = 0;
    koef = 1;

    while (str[index] - '0' == -16)
        str++;
    if (str[0] - '0' == -3)
    {
        koef = -1;
        str++;
    }
    
    
    if (str[0] - '0' < 0|  str[0] - '0' > 9)
        return(0);
    
   while (str[index] && (str[index] >= '0') && (str[index] <= '9'))
	{
		res = res * 10 + str[index] - '0';
		index++;
	}
    if (koef == -1)
        res *= -1;
    printf("%d\n", res);
   return(res);
}
int     main(void)
{
    int atoi(const char *);
    int a;
    char c;

    printf("%d\n",  ft_atoi("_0"));
    /* ft_atoi("123.5e15");
    printf("atoi function=%d\n", atoi("d   1 53"));
    ft_atoi("d   1 53");

    printf("atol function=%d\n-------\n",atoi("string"));
    ft_atoi("string");
    printf("atol function=%d\n-------\n",atoi("@#%%^&&(()hjhfuyf6787"));
    ft_atoi("@#%%^&&(()hjhfuyf6787");*/
    
   
    
    
    //ft_putstr("-12356885");

//    printf("atol function=%d\n",atoi("-1345.2"));
    

    //ft_atoi("    - 376");
    // ft_atoi("0123456789fff");
    //ft_atoi("!   - 376");
    // ft_atoi("B    - 376");
    //ft_atoi("-376");
    return (0);
}
