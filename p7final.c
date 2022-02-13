#include <stdio.h>

struct _triangle
{
float b,a,A;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base of Triangle:\n");
  scanf("%f", &t.b);
  printf("Enter the altitude of Triangle:\n");
  scanf("%f", &t.a);
  return t;
}

void find_area(Triangle *t)
{
  t->A = 0.5 * t->b * t->a ;
}

void output(Triangle t)
{
  printf("The Area of Triangle with sides %f and %f is %f", t.b, t.a, t.A);
}

int main()
{
  Triangle t = input_triangle();
  find_area(&t);
  output(t);
  return 0;
}