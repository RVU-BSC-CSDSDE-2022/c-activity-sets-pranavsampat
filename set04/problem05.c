#include<stdio.h>
// int input_array_size();
// void init_array(int n, int a[n];
// void erotosthenes_sieve(int n, int a[n]);
// void output(int n, int a[n]);
int input_array_size()
{
  int n;
  printf("enter array size");
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n]){
  int i;
    printf("enter  number");
    scanf("%d",&a[i]);
}
float erotosthenes_sieve(int n,int a[n]){
 int i;
  float count=0;
  for(i=2;i<=n;i++){
    if(n%i==0){
      count=count+a[i];
    }
  }
  return count;
}
void output(int n, int a[n],float count){
  printf("the numbers are %f",count);
}
int main(){
  int n;
  float count;
  n=input_array_size();
  int a[n];
  init_array(n,a);
  count=erotosthenes_sieve(n,a);
  output(n,a,count);
}