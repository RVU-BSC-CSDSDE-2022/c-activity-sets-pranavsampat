#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int input_number() 
{
  int n;
  printf("enter a number");
  scanf("%d", &n);
  return n;
}
int is_prime(int n) 
{
  int y;
  int i;
  y = 0;
  for (i = 1; i <= n; i++) 
  {
    if (n % i == 0) 
    {
      y++;
    }
  }
  return y;
}
void output(int n, int result) 
{
  if (result == 2) 
  {
    printf("%d is a prime number", n);
  } 
    else if (result > 2) 
  {
      printf("%d is not a prime number", n);
  }
}
int main() 
{
  int n, result;
  n = input_number();
  result = is_prime(n);
  output(n, result);
}
