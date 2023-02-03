#include <math.h>
#include <stdio.h>
struct Point 
{
  float x;
  float y;
};
typedef struct Point point;
point input();
void dist(point a, point b, float *res);
void output(point a, point b, float res);
point input() 
{
  point n;
  printf("enter values of (x,y)");
  scanf("%f %f", &n.x, &n.y);
  return n;
}
void dist(point a, point b, float *res)
{
  *res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}
void output(point a, point b, float res) 
{
  printf("distance between(%.1f,%.1f) and(%.1f,%.1f) is %.1f", a.x, a.y, b.x,
         b.y, res);
}
int main() 
{
  point a, b;
  float c;
  a = input();
  b = input();
  dist(a, b, &c);
  output(a, b,c);
}