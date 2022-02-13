struct _triangle
{
float b,a,A;
}
typedef Triangle

int input_n()
{
  int n;
  printf("Enter the number of Triangles");
  scanf("%d", &n);
  return n;
}

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and altitude of a Triangle");
  scanf("%f %f", &t.b, &t.a);
  return t;
}

void input_n_triangles(int n, triangle t[n])
{
  for(int i=0; i<n; i++)
    {
      printf("Enter the altitude and base of Triangle:\n");
      t[i] = input_triangle();
    }
}

void find_area(Triangle *t)
{
  t->A = 0.5*t->a*t->b;
  return t;
}

void find_areas_n(int n, Triangle t[n])
{
  for(int i=0; i<n; i++)
    {
      find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n])

void output(int n, Triangle t[n], Triangle smallest)
{
  printf("The smallest area out of %d triangles with");
  for(int i=0; i<n-1; i++)
    {
      printf("base = %f and altitude= %f, ", t[i].b, t[i].a);
    }
  printf("base = %f and altitude = %f is Triangle with base = %f and altitude = %f", t[n-1].b, t[n-1].a, smallest.b, smallest.a);
}

int main()
{
  int n = input_n();
  Triangle t[n];
  input_n_triangles(n, t);
  find_areas_n(n, t);
  Triangle smallest = find_smallest_triangle(n, t);
  output(n, t, smallest);
  return 0;
}