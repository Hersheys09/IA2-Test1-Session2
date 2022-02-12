#include <stdio.h>

void input(float *base, float *height)
{
  printf("Enter the values of Base & Height of triangle in cm:\n");
  scanf("%f %f", base, height);
}

void find_area(float base , float height, float *area)
{
  *area = 0.5*base*height;
}

void output(float base, float height, float area)
{
  printf("The area of Triangle with base %f cm and Height %f cm is equal to %f cm", base, height, area);
}

int main()
{
  float b, h, a;
  input(&b, &h);
  find_area(b, h, &a);
  output(b, h, a);
  return 0;
}