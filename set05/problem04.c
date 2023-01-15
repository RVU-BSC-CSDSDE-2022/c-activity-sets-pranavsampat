#include<stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
int input_degree(){
  int n;
  printf("enter degree");
  scanf("%d",&n);
  return n;
}
void input_coefficients(int n,float a[n]){
  int i;
  for(i=0;i<n;i++){
    printf("enter value of coefficients");
    scanf("%d",a[i]);
  }
}
float input_x(){
  float x;
  printf("enter value of x");
  scanf("%f",&x);
  return x;
}
float evaluate_polynomial(int n,float a[n],float x){
  float result;
  float var;
  int i;
  a[0]=1;
  for(int i=0;i<n;i++){
    var=a[i]*x++;
  }
  result=a[0]+var;
  return result;
}
void output(int n,float a[n],float x,float result){
  printf("H(%d) is = %f",n,result);
}
int main(){
  int n;
  n=input_degree();
  float a[n];
  input_coefficients(n,a);
  float x;
  x=input_x();
  float result;
  result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
}