#include<stdio.h>
int input_array_size(){
  int n;
  printf("enter array size");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n]){
  int i;
  i=0;
  for(i=0;i<n;i++){
    printf("enter array numbers");
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n, int a[n]){
  int sum,count;
  int i;
  i=0;
  sum=0;
  for(i=0;i<n;i++){
    count=0;
    for(int j=0;j<a[i];j++){
      if(a[i]%(j+1)==0){
        if(count>=2){
          sum=sum+a[i];
          break;
          }
      else{
        count=count+1;
        }
      }
      }}return sum;
    }  
void output(int sum){
  printf("the sum of composite numbers is %d",sum);
}
int main(){
  int x,sum;
  x=input_array_size();
    int a[x];
  input_array(x,a);
    sum=sum_composite_numbers(x,a);
  output(sum);
  }