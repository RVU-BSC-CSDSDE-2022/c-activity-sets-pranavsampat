#include<stdio.h>
int input_array_size();
 void input_array(int n,int a[n]);
  int sum_n_array(int a[],int n,int total);
  void output(int total);
int main(void)
{
  int n,sum,total;
  n=input_array_size(n);
  int a[n];
  input_array(n,a);
  total=sum_n_array(a,n,total);
  output(total);
  return 0;
}
int input_array_size(){
  int n;
  printf("enter arrazy size ");
  scanf("%d", &n);
  return n;
}
void input_array(int n,int a[n])
{
int i=0;
for(i=0;i<n;i++)
  {
printf("enter array numbers");
scanf("%d", &a[i]);}
}
int sum_n_array(int a[],int n,int total)
{
  //sum= 0;
  //int total;
  total=0;
 int i=0;
  for(i=0;i<n;i++){
    total= total+a[i];
    printf("%d\n", total);
  }
  return total;
}
void output(int total)
{
  printf("the sum of numbers is %d", total);
