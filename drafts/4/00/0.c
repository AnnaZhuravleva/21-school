
#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  int i;
  int k;
  i = 1;
  k = 1;
  while  (k <= nb)
  {
      i = i * k;
      k ++;
  }
  printf("%i", i);
  return (i);
}
int main()
{
  ft_iterative_factorial(5);
  return(0);
}
