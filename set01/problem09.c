#include<stdio.h>
float input();
float square_root(float n,float temp, float sqroot);
void output(float n,float sqroot);
int main()
{
float n,a,sqroot,temp;
  a=input();
  temp=0;
  sqroot=square_root(a,temp,sqroot);
  output(n,sqroot);
}
  float input()
{
  float n;
  printf("enter a number");
  scanf("%f",&n);
  return n;
  }
  float square_root(float a,float temp, float sqroot)
{
  temp=0;
  sqroot=a/2;
  while(sqroot!=temp){
    temp=sqroot;
    sqroot=((a/temp)+temp)/2;
    }
  return sqroot;
  }
void output(float n,float sqroot)
{
  printf("the square root is %f",sqroot);
}