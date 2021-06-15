#include <stdio.h>
int Sum(int n)
{

  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n + Sum(n - 1);
  }
}

int main()
{
  int n;
  printf("Enter the number for sum:");
  scanf("%d", &n);
  printf("The sum of number is %d\n", Sum(n));

  return 0;
}