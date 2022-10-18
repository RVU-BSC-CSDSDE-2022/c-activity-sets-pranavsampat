#include<stdio.h>
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=compare(a,b,c,largest);
  output(a,b,c,largest);
}
int input()
{
  int n;
  printf("enter a number");
  scanf("%d", &n);
    return n;
}
int compare(int a,int b, int c){
int largest;

if((*a>*b)&&(*a>*c))
{
  *largest=a;
}
else if((*b>*c)&&(*c>*a))
  {
  largest=b;
  }
else
  if((*c>*a)&&(*a>*b))
  {
  largest=c;
  }
return largest;}

output(int a,int b,int c, int largest)
{
  printf("the largest among %d %d and %d is %d",a,b,c,largest);
}
