#include <math.h>
#include <stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
int input_degree() 
{
  int n;
  printf("enter degree");
  scanf("%d", &n);
  return n;
}

void input_coefficients(int n, float a[n]) 
{
  int i;
  for (i = 0; i <= n; i++) 
  {
    printf("enter value of coefficients");
    scanf("%f", &a[i]);
  }
}
float input_x() 
{
  float x;
  printf("enter value of x");
  scanf("%f", &x);
  return x;
}
float evaluate_polynomial(int n, float a[n], float x) 
{
  float result;
  float var;
  var = 0;
  int i;
  for (int i = 0; i <= n; i++) 
  {
    var = var + (a[i] * pow(x, i));
  }
  result = var;
  return result;
}
void output(int n, float a[n], float x, float result) 
{
  printf("answer is %f", result);
}
int main() 
{
  int n;
  n = input_degree();
  float a[n];
  input_coefficients(n, a);
  float x;
  x = input_x();
  float result;
  result = evaluate_polynomial(n, a, x);
  output(n, a, x, result);
}