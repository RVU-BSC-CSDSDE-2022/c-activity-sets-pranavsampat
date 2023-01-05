#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int input_n(){
int n;
printf("enter num");
scanf("%d",&n);
return n;
}
int sum_n_nos(int n){
int sum;
  int i;
  sum=0;
  for(i=0;i<=n;i++){
      sum=sum+i;
    }
  return sum;
}
void output(int n,int sum){
printf("Sum is %d",sum);
}
int main(){
int a,sum;
a=input_n();
sum=sum_n_nos(a);
output(a,sum);
return 0;
}
