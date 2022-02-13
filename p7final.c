#include <stdio.h>

struct _triangle
{
float b,a,A;
}
typedef Triangle

Triangle input_triangle()
{
  printf("Enter the base of Triangle:\n");
  scanf("%f", Triangle.b);
  printf("Enter the altitude of Triangle:\n");
  scanf("%f", Triangle.h);
}

void find_area(Triangle t)
{
  Triangle.A = 0.5*Triangle.b*Triangle.h;
}

void output(Triangle t)
{
  printf("The Area of Triangle with sides %f and %f is %f", Triangle.b, Triangle.a, Triangle.A);
}

int main()
{
  Triangle t = input_triangle();
  find_area(t);
  output(t);
  return 0;
}