#include <math.h>
#include <stdio.h>
typedef struct point {
  float x, y;
} Point;

typedef struct polygon {
  int sides;
  Point p[100];
  float perimeter;
} Polygon;

int input_n();
Point input_point();
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);
int input_n() {
  int n;
  printf("enter number of points");
  scanf("%d", &n);
  return n;
}
Point input_point() {
  Point n;
  printf("enter points");
  scanf("%f%f", &n.x, &n.y);
  return n;
}
int input_polygon(Polygon *p) {
  p->sides = input_n();
  for (int i = 0; i < p->sides; i++) {
    p->p[i] = input_point();
  }
}
float find_distance(Point a, Point b) {
  float distance;
  distance = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
  return distance;
}
void find_perimeter(Polygon *p) {
  p->perimeter = 0;
  for (int i = 0; i < p->sides - 1; i++) {
    p->perimeter += find_distance(p->p[i], p->p[i + 1]);
  }
  p->perimeter += find_distance(p->p[p->sides - 1], p->p[0]);
}
void output(Polygon p) { printf("the perimeter is %f", p.perimeter); }
int main() {
  Polygon p;
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
  return 0;
}
