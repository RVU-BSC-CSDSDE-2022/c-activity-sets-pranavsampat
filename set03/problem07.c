#include <stdio.h>
typedef struct Triangle 
{
  float area;
  float altitude;
  float base;
} triangle;
triangle input_data() 
{
  triangle t;
  printf("enter base and altitude");
  scanf("%f %f", &t.base, &t.altitude);
  return t;
}
void find_area(triangle *t) 
{ 
  t->area = (0.5) * (t->base) * (t->altitude); 
  }
void output(triangle t) 
{
  printf("the area of triangle with base %f and altitude %f is = %f", t.base,
         t.altitude, t.area);
}
int main() 
{
  triangle t;
  t = input_data();
  find_area(&t);
  output(t);
}