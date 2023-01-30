#include <stdio.h>
typedef struct _triangle 
{
  float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int input_n() 
{
  int n;
  printf("enter number of triangles");
  scanf("%d", &n);
  return n;
}
Triangle input_triangle() 
{
  Triangle n;
  printf("enter base and altitude");
  scanf("%f %f", &n.base, &n.altitude);
  return n;
}
void input_n_triangle(int n, Triangle t[n]) 
{
  for (int i = 0; i < n; i++) {
    t[i] = input_triangle();
  }
}
void find_area(Triangle *t) 
{
  t->area = 0.5 * (t->base * t->altitude); 
  }
void find_n_areas(int n, Triangle t[n]) 
{
  for (int i = 0; i < n; i++) 
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n]) 
{
  Triangle small;
  small = t[0];
  for (int i = 0; i < n; i++) 
  {
    if (t[i].area <= small.area) 
    {
        small = t[i];
    }
  }
  return small;
}
void output(int n, Triangle t[n], Triangle small) 
{
  printf("the smallest triangle is the one whose base is %.2f altitude is %.2f "
         "and area is %.2f",
         small.base, small.altitude, small.area);
}
int main() 
{
  int n;
  n = input_n();
  Triangle a[n];
  input_n_triangle(n, a);
  find_n_areas(n, a);
  Triangle small;
  small = find_smallest_triangle(n, a);
  output(n, a, small);
}