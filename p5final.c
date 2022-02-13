#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);
  return n;
}

int gcd(int a, int b)
{
    int large = a > b ? a : b;
    int small = a < b ? a : b;
    int i = 1;
    int rem = 1;

    while (rem)
    {
        rem = large - i * small;
        if (rem < small)
        {
            large = small;
            small = rem;
            i = 0;
        }
        i++;
    }
    return large;
}

void output(int a, int b, int gcd)
{
  printf("The hcf of %d and %d is %d\n", a, b, gcd);
}

int main()
{
  int n1 = input();
  int n2 = input();
  int res = gcd(n1, n2);
  output(n1, n2, res);
  return 0;
}