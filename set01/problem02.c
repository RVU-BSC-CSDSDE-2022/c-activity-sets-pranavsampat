#include <stdio.h>

int main(void) {
  int a,b,c;
a=input();
b=input();
c=add(a,b);
output(a,b,c);
  return 0;
  }
int input(){
  int n;
  printf("enter a number\n");
  scanf("%d", &n);
  return n;
}
int add(int a,int b){
  int c;
  c=a+b;
return c;
}
void output(int a, int b, int c)
{
  printf("the sum of %d and %d is %d",a,b,c);
}

