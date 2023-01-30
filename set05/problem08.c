#include<stdio.h>
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);
int input_n()
{
  int n;
  printf("enter number of fractions");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
  Fraction n;
  printf("enter numerator and denominator");
  scanf("%d %d",&n.num,&n.den);
  return n;
}
void input_n_fractions(int n, Fraction f[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    f[i]=input_fraction();
  }
}
int find_gcd(int a,int b)
{
  int gcd;
  int i;
  for(i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
      gcd=i;
    }
  }
  return gcd;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
  int num=f1.num*f2.den+f2.num*f1.den;
  int den=f1.den*f2.den;
  int i=find_gcd(num,den);
  sum.num=num/i;
  sum.den=den/i;
  return sum;
}
Fraction add_n_fractions(int n, Fraction f[n])
{
  int i;
  Fraction add=f[0];
  for(i=1;i<n;i++){
    add=add_fractions(f[i],add);
  }
  return add;
}
void output(int n, Fraction f[n], Fraction sum)
{
  int i;
  for(i=0;i<n;i++)
  {
    if(i<n-1)
    {
    printf("%d/%d + ",f[i].num,f[i].den);
  }
      else if(i<n)
    {
        printf("%d/%d=",f[i].num,f[i].den);
    }
}
  printf("%d/%d",sum.num,sum.den);
  }
int main()
{
  int n;
  n=input_n();
  Fraction a[n];
  input_n_fractions(n,a);
  Fraction sum;
  sum=add_n_fractions(n,a);
  output(n,a,sum);
}