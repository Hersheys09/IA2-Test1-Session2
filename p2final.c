#include <stdio.h>

int input_side()
{
  int s;
  printf("Enter side of Triangle:\n");
  scanf("%d", &s);
  return s;
}

int check_scalene(int a, int b, int c)
{
  int r;
  if(a != b != c)
    r=0;
  else
    r=1;
  return r;
}

void output(int a, int b, int c, int isscalene)
{
   if (isscalene == 1)
   printf("Triangle of side %d, %d and %d is NOT Scalene\n", a, b, c);
    
  else
   printf("Triangle of side %d, %d and %d is Scalene\n", a, b, c);
}

int main()
{
  int a,b,c, isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
  }