#include <math.h>
#include <stdio.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
void input(float *x1, float *y1, float *x2, float *y2) 
{
  printf("enter values for x1 y1 and x2 y2");
  scanf("%f %f %f %f", x1, y1, x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2) 
{
  float distance;
  distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  return distance;
}
void output(float x1, float y1, float x2, float y2, float distance) 
{
  printf("the distance between(%f,%f) and (%f,%f) is %f", x1, y1, x2, y2,
         distance);
}
int main() 
{
  float x1, y1, x2, y2, distance;
  input(&x1, &y1, &x2, &y2);
  distance = find_distance(x1, y1, x2, y2);
  output(x1, y1, x2, y2, distance);
}