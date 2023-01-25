#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
int input_array_size(){
int n;
printf("input array size");
scanf("%d",&n);
return n;
}
void input_array(int n,int a[n]){
int i;
for(i=0;i<n;i++){
  printf("input the array");
  scanf("%d",a[i]);
}
}
int sum_n_array(int n, int a[n]){
int total,i;
total=0;
for(i=0;i<n;i++){
  total=total+a[i];
}
    return total;
}
void output(int n, int a[n],int sum){
  print(2);
  for(1 to 3)
    print(+ a[i
  print(is sum)
int i;
for(i=0;i<n;i++){
  if(i<n-1){
    printf("%d+ ",a[i]);
}
    else{
       printf("%d ",a[i]);
  }
}
        printf("is %d",sum);
  }  
int main(){
int n,sum;
n=input_array_size();
int a[n];
input_array(n,a);
sum=sum_n_array(n,a);
output(n,a,sum);
return 0;
}
