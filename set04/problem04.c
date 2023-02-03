#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int input() 
{
  int n;
  printf("enter the nth number");
  scanf("%d", &n);
  return n;
}
int find_fibo(int n) 
{
  int nth;
  int first, seco;
  first = 0;
  seco = 1;
  if (n == 1) {
    nth = first;
  } 
    else if (n == 2) 
  {
      nth = seco;
  } 
      else 
    {
        for (int i = 2; i <= n; i++) 
        {
          nth = first + seco;
          first = seco;
          seco = nth;
    }
  }
  return nth;
}

void output(int n, int fibo) 
{ 
  printf("fibo(%d) is %d", n, fibo); 
  }
int main() 
{
  int n, fibo;
  n = input();
  fibo = find_fibo(n);
  output(n, fibo);
}