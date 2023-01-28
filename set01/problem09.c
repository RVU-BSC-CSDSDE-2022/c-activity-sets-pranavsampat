#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

float input() 
{
  float n;
  printf("enter number");
  scanf("%f", &n);
  return n;
}
float square_root(float n) 
{
  float temp = 0;
  float sqroot = n / 2;
  while (sqroot != temp) {
    temp = sqroot;
    sqroot = ((n / temp) + temp) / 2;
  }
  return sqroot;
}
void output(float n, float sqroot) 
{
  printf("square root of %.1f is %.1f", n, sqroot);
}
int main() {
  float a, sqroot;
  a = input();
  sqroot = square_root(a);
  output(a, sqroot);
  return 0;
}
