#include<stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);
int input_size()
{
  int n;
  printf("enter array size");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter numbers");
    scanf("%d",&a[i]);
  }
}
int find_largest_index(int n,int a[n])
{
  int index;
  index=1;
 int max=a[0];
  for(int i=0;i<n;i++)
  {
    if(a[i]>max){
      max=a[i];
index=i;
    }
      else if(max==a[0])
      {
        index=0;
    }
  }
  return index;
}
void output(int index)
{
  printf("the index of largest is %d",index);
}
int main()
{
  int n,index;
  n=input_size();
  int a[n];
  input_array(n,a);
  index=find_largest_index(n,a);
  output(index);
}