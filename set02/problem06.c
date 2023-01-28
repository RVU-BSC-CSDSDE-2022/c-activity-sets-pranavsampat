#include <stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
int input_n() 
{
  int n;
  printf("enter value of n");
  scanf("%d", &n);
  return n;
}
void input(int n, int a[n]) 
{
  int i;
  for (i = 0; i < n; i++) 
  {
    printf("enter array numbers");
    scanf("%d", &a[i]);
  }
}
float odd_average(int n, int a[n]) 
{
  float avg;
  int i, count, sum;
  i = 0;
  count = 0;
  sum = 0;
  for (i = 0; i < n; i++) 
  {
    if (a[i] % 2 != 0) 
    {
      sum = sum + a[i];
      count++;
    }
  }
  avg = sum / count;
  return avg;
}

void output(float avg) 
{
  printf("avg is %f", avg); 
  }
int main() 
{
  int n;
  float avg;
  n = input_n();
  int a[n];
  input(n, a);
  avg = odd_average(n, a);
  output(avg);
}
