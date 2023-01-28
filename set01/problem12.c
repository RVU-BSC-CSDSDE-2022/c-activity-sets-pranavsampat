#include <stdio.h>
struct complex 
{
  float real, imaginary;
};
typedef struct complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int get_n() 
{
  int n;
  printf("Enter the number of arrays:");
  scanf("%d", &n);
  return n;
}
Complex input_complex() 
{
  Complex num;
  printf("enter numbers");
  scanf("%f %f", &num.real, &num.imaginary);
  return num;
}
void input_n_complex(int n, Complex c[n]) 
{
  int i;
  for (i = 0; i < n; i++) {
    c[i] = input_complex();
  }
}
Complex add_complex(Complex a, Complex b) 
{
  Complex sum = {0, 0};
  sum.real = a.real + b.real;
  sum.imaginary = a.imaginary + b.imaginary;
  return sum;
}
Complex add_n_complex(int n, Complex c[n]) 
{
  int i;
  Complex sum;
  for (i = 0; i < n; i++) 
  {
    sum = add_complex(c[i], sum);
  }
  return sum;
}
void output(int n, Complex c[n], Complex result) 
{
  int i;
  printf("%1.f+%1.fi",c[0].real,c[0].imaginary);
  for (i = 1; i < n; i++) 
  {
      printf("+%1.f+%1.fi", c[i].real, c[i].imaginary);
    }
  printf("=%1.f+%1.fi", result.real, result.imaginary);
}
int main() 
{
  int n;
  n = get_n();
  Complex c[n], result;
  input_n_complex(n, c);
  result = add_n_complex(n, c);
  output(n, c, result);
  return 0;
}
