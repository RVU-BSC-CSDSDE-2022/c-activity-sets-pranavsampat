#include<stdio.h>
int input(int x){
  printf("enter a number");
  scanf("%d",&x);
  return x;
}
float borga(int x){
  float bor;
  int y=0;
  for(y=0;y<x;y++){
    bor=1 + (x^1)/y+1 +(x^2)/y+1+(x^3)/y+1;
    return bor;
  }
}
void output(int a,float s){
  printf("the answer for %d is %f",a,s);
}
int main(){
  int a,b;
  float s;
  a=input(b);
  s=borga(a);
  output(a,s);
}