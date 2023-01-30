#include<stdio.h>
#include<math.h>
typedef struct point 
{
    float x, y;
} Point;

typedef struct line 
{
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
Point input_point()
{
  Point n;
  printf("enter points");
  scanf("%f %f",&n.x,&n.y);
  return n;
}
Line input_line()
{
  Line x;
  x.p1=input_point();
  x.p2=input_point();
  return x;
}
void find_length(Line *l)
{
Point a;
  l->distance=sqrt(pow(l->p2.x-l->p1.x,2)+pow(l->p2.y-l->p1.y,2));
}
void output(Line l)
{
  Point a;
  printf("the distance between point(%f,%f) and (%f,%f) is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}
int main()
{
  Point x;
  Line y;
  // x=input_point();
  y=input_line();
  find_length(&y);
  output(y);
  return 0;
}