#include<stdio.h>
struct Camel{
float height,length,radius,weight;
};
typedef struct Camel camel;
int input_n(int n){
  printf("enter number of camels");
scanf("%d",&n);
  return n;
}
void input(int n,camel c[n],float *truckweight){
  int i;
  for(i=0;i<n;i++){
  printf("enter radius,weight,height of camel  %d\n",i+1);
  scanf("%f %f %f",&c[i].radius,&c[i].weight,&c[i].height);
    }
     printf("enter truckweight");
    scanf("%f",truckweight);
    
}
void output(int x,camel a[x],float truckweight){
  int i;
  i=0;
  for(i=0;i<x;i++){
    printf("the height is %.2f,length is %.2f, and radius is %.2f ",a[x].height,a[x].length,a[x].radius);
  }
}
int input_n(int n);
void input(int n,camel c[n],float *truckweight);
void output(int x,camel a[x],float truckweight);
int main()
  {
    int x;float truckweight;
    x=input_n(x);
camel a[x];
   
input(x,a,&truckweight);
    output(x,a,truckweight);
  }