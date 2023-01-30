#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3,
                    float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3,
            int result);
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3,
                    float *y3) 
{
  printf("enter values for points\n");
  scanf("%f %f %f %f %f %f", x1, y1, x2, y2, x3, y3);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) 
{
  float area, a, b, c;
  int x;
  a = x1 * (y2 - y3);
  b = x2 * (y3 - y1);
  c = x3 * (y1 - y2);
  area = 0.5 * a + b + c;
  if (area == 0) 
  {
    x = 0;
  } 
    else 
  {
      x = 2;
  }
  return x;
}
void output(float x1, float y1, float x2, float y2, float x3, float y3,
            int result) 
{
  if (result == 0) 
  {
    printf("the points(%.1f,%.1f),(%.1f,%.1f) and (%.1f,%.1f) form a triangle",
           x1, y1, x2, y2, x3, y3);
  } 
    else 
  {
    printf("the points(%.1f,%.1f),(%.1f,%.1f) and (%.1f,%.1f) do not form a "
           "triangle",
           x1, y1, x2, y2, x3, y3);
  }
}
int main() 
{
  float x1, y1, x2, y2, x3, y3;
  int area;
  input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
  area = is_triangle(x1, y1, x2, y2, x3, y3);
  output(x1, y1, x2, y2, x3, y3, area);
}