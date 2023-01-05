#include<stdio.h>
int input_side();
int check_scalene(int a,int b,int c);
void output(int a,int b,int c,int scalene);
 int main(){
    int a,b,c,scalene;
    a=input_side();
    b=input_side();
    c=input_side();
    scalene=check_scalene(a,b,c);
    output(a,b,c,scalene);}
int input_side(){
  int n;
  printf("enter side");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c){
  if( (a!=b) && (b!=c) && (c!=a)){
    return 1;
  }
  else{
    return 4;
  }}
 void output(int a,int b,int c,int scalene){
  if(scalene==1){
    printf("the triangle with sides %d %d %d is scalene",a,b,c);
  }
   else{
   printf("the triangle with sides %d %d %d is not scalene",a,b,c);
 }}
  