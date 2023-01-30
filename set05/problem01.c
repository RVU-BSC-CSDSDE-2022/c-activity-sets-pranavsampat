#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
void input(int *num1, int *den1, int *num2, int *den2) 
{
  printf("enter numerator and denminator for number 1 and number 2");
  scanf("%d %d %d %d", num1, den1, num2, den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) 
{
  int x = den1 * den2;
  int y = num1 * den2 + num2 * den1;
  for (int i = 1; i <= x && i <= y; i++) 
  {
    if (x % i == 0 && y % i == 0) {
      *res_den = x / i;
      *res_num = y / i;
    }
  }
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den) 
{
  printf("%d/%d+%d/%d=%d/%d", num1, den1, num2, den2, res_num, res_den);
}
int main() 
{
  int num1, num2, den1, den2, res_num, res_den;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &res_num, &res_den);
  output(num1, den1, num2, den2, res_num, res_den);
}