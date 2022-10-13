#include<stdio.h>
int main()
{
  int a,b,w;
  printf("enter two numbers");
  scanf("%d %d", &a, &b);
 w= add(a,b); 
  printf("the sum of %d and %d is %d",a , b, w);
}
    add(int a,int b)
{ int c;
  c= a+b;
  return(c); 
}
