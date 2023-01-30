#include<stdio.h>
typedef struct 
{
    float num, den;
} Fraction;
Fraction input();
float smallest(Fraction a,Fraction b,Fraction c);
void output(Fraction a,Fraction b,Fraction c,float x);
Fraction input()
{
  Fraction x;
printf("enter numerator and denominator");
  scanf("%f %f",&x.num,&x.den);
  return x;
}
float smallest(Fraction a,Fraction b,Fraction c)
{
  float resa=a.num/a.den;
  float resb=b.num/b.den;
  float resc=c.num/c.den;
  float fax;
  if(resa<resb && resa<resc)
  {
    fax=1;
  }
    else if(resb<resa && resb<resc){
      fax=2;
  }
      else if(resc<resa && resc<resb){
        fax=3;
  }
  return fax;
}
void output(Fraction a,Fraction b,Fraction c,float x)
{
  if(x==1)
  {
    printf("the smallest is %.1f/%.1f",a.num,a.den);
  }
    else if(x==2)
  {
    printf("the smallest is %.1f/%.1f",b.num,b.den);
  }
      else if(x==3)
  {
  printf("the smallest is %.1f/%.1f",c.num,c.den);
    }
      else
  {
    printf("wrong input");
  }
}
  int main(){
    Fraction a,b,c;
    a=input();
    b=input();
    c=input();
    float x;
    x=smallest(a,b,c);
    output(a,b,c,x);
  }
  