#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);
  return n;
}

int is_composite(int n)
{
  for(int i=2; i<=n/2; i++)
  {
    if(n%i == 0)
    return 1;
  }
  return 0;
}

void output(int n, int composite)
{
  if(composite == 0)
    printf("The number %d is Prime\n", n);
  else
    printf("The number %d is Composite\n", n);
}

int main()
{
  int n = input_number();
  int composite = is_composite(n);
  output(n, composite);
  return 0;
}