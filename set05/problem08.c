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
int input_n(){
  int n;
  print("enter number of fractions");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction(){
  Fraction n;
  printf("enter numerator and denominator");
  scamf("%d %d",&n.num,&n.den);
  return n;
}
void input_n_fractions(int n, Fraction f[n]){
  int i;
  for(i=0;i<n;i++){
    f[i]=input_fraction();
  }
}
int find_gcd(int a,int b){
  int gcd;
  int i;
  for(i=1;i<=a && i<=b;i++){
    if(a%i==0 && b%i==0){
      gcd=i;
    }
  }return gcd;
}
Fraction add_fractions(Fraction f1, Fraction f2){
  Fraction sum;
  int num=f1.num*f2.den+f2.num*f1.den;
  int den=f1.den*f2.den;
  int i=input_gcd(num,den);
  sum.num=num/i;
  sum.den=den/i;
  return sum;
}
Fraction add_n_fractions(int n, Fraction f[n]){
  int i;
  Fraction add;
  for(i=0;i<n;i++){
    
  }
}