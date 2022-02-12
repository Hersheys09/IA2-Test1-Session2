#include <stdio.h>

int input_array_size()
{
  int x;
  printf("Enter the number of values you will enter:\n");
  scanf("%d", &x);
  return x;
}

void input_array(int n, int a[n])
{
  printf("Enter the values:\n");
  for(int i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
}

int is_composite(int b)
{
  for (int i = 2; i <= b/2; i++)
  {
    if (b%i == 0)
      return 1;
  }
  return 0;
}

int sum_composite_numbers(int n, int a[n])
{
  int sum = 0;
  for(int i=0; i<n; i++)
    {
      if(is_composite(a[i]))
      {
        sum = sum + a[i];
      }
    }
  return sum;
}

void out_put(int sum)
{
  printf("The sum of all entered COMPOSITE numbers is = %d", sum);
}

int main()
{
  int n = input_array_size();
  int a[n];
  input_array(n, a);
  int sum = sum_composite_numbers(n, a);
  out_put(sum);
  return 0;
}