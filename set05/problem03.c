#include<stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
void input_n_and_r(int *n, int *r){
  printf("enter n and r");
  scanf("%d %d",n,r);
}
int nCr(int n,int r){
  int result;
  int denom=(n-r);
  for(int i=1;i<=n;i++){
    n=n*i;
    r=r*i;
  
    result=n/r;
  }
  return result;
}
void output(int n,int r,int result){
  printf("for n = %d and r = %d ncr = %d",n,r,result);
}
int main(){
  int n,r,result;
  input_n_and_r(&n,&r);
  result=nCr(n,r);
  output(n,r,result);
  return 0;
}