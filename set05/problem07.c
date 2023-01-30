#include<stdio.h>
typedef struct 
{
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2,Fraction sum);
Fraction input_fraction()
{
  Fraction n;
  printf("Enter numerator and denominator");
  scanf("%d %d",&n.num,&n.den);
  return n;
}
int find_gcd(int a,int b)
{
  int gcd;
  int i=0;
  for(i=1;i<=a && i<=b;i++){
    if(a%(i)==0 && b%(i)==0){
      gcd=i;
    }
  }
  return gcd;
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction res;
  int num=(f1.num*f2.den+f2.num*f1.den);
  int den=(f1.den*f2.den);
  int i=find_gcd(num,den);

      res.num=num/i;
      res.den=den/i;
  return res;
}
void output(Fraction f1,Fraction f2,Fraction sum)
{
  printf("%d/%d + %d/%d= %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  Fraction a,b;
  int gcd;
  a=input_fraction();
  b=input_fraction();
    Fraction sum;
sum=add_fractions(a,b);
  output(a,b,sum);
}