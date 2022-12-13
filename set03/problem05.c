#include<stdio.h>
int input(){
  int n;
  printf("enter numbers");
  scanf("%d",&n);
  return n;
}
int input_gcd(int a,int b){
  int gcd;
  int i;
  for(i=1;i<a;i++){
    if(a%i==0 && b%i==0){
    gcd=i;  
    }
  }return gcd;
}
void output(int a,int b,int gcd){
  printf("gcd for %d and %d is %d",a,b,gcd);
}
int main(){
  int a,b,gcd;
  a=input();
  b=input();
  gcd=input_gcd(a,b);
  output(a,b,gcd);
}