#include<stdio.h>
int main()
{
  int a,b;
  a=input();
  b=natural_sum(a);
  output(a,b);
}
int input()
{
  int n;
  printf("enter a number");
  scanf("%d", &n);
  return n;
}
int natural_sum(int n,int sum)
{
  sum=(n*(n+1))/2;
  return sum;
}
void output(int a,int b){
  printf("the sum of natural numbers %d is %d",a,b);
}
