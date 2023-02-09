#include <stdio.h>
int input(int x) 
{
  printf("enter a number");
  scanf("%d", &x);
  return x;
}
float borga(int x) 
{
  float i = 1;
  float j = 1;
  float num = 1;
  float den;
  float sum = 0;
  while (i > 0) 
  {
    den = 1; 
    for (j = 1; j < ((2 * i) + 2); j++) 
    {
      den = den * j;
    }
    num = num * x;
      if ((num / den) > 0.000001) 
    {
      sum = sum + (num / den);
      i = i + 1;
    } 
        else 
    {
      break;
    }
  }
  return sum;
}
void output(int a, float s) 
{ 
  printf("the answer for %d is %f", a, s); 
  }
int main() 
{
  int a, b;
  float s;
  a = input(b);
  s = borga(a);
  s = s + 1;
  output(a, s);
}