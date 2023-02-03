#include <stdio.h>
int input();
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int input()
{
int n;
  printf("enter number");
  scanf("%d",&n);
  return n;
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
 printf("the sum of %d and %d is %d",a,b,sum); 
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  add(a,b,&sum);
  output(a,b,sum);
}