#include <stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
void input_n_and_r(int *n, int *r) 
{
  printf("enter n and r");
  scanf("%d %d", n, r);
}
int nCr(int n, int r) 
{
  int result;
  int num = 1;
  int n_r = 1;
  int r_fact = 1;
  int den;
  for (int i = 1; i <= n && n >= r; i++) 
  {
    if (i <= r) 
    {
      r_fact = r_fact * i;
      n_r = n_r * i;
      num = num * i;
    } 
      else if (i <= n - r) 
      {
      n_r = n_r * i;
      num = num * i;
    } 
        else 
      {
      num = num * i;
    }
  }
  // printf("%d\n",num);
  // printf("%d\n",r_fact);
  // printf("%d\n",n_r);
  result = num / (r_fact * n_r);
  return result;
}
void output(int n, int r, int result) 
{
  printf("for n = %d and r = %d ncr = %d", n, r, result);
}
int main() 
{
  int n, r, result;
  input_n_and_r(&n, &r);
  result = nCr(n, r);
  output(n, r, result);
  return 0;
} 