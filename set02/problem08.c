#include<stdio.h>
struct Camel{
float radius,height,weight,length;
};
typedef struct Camel camel;
void input(int n,camel c[n],float *truckweight){
  int i;
  i=0;
printf("enter number of camels");
scanf("d",&n);
  for(i=0;i<n;i++){
  printf("height of camel %d",i);
  scanf("%f",&c[i].height);
  printf("length of camel %d",i);
  scanf("%f",&c[i].length);
  printf("radius of length %d",i);
  scanf("%f",&c[i].radius);
    }i++;
printf("enter weight");
scanf("%f",truckweight);}    
int main()
  {
    int x;
camel a[x];
float truckweight;
input(x,a,&truckweight);
    printf("%d %f",x,truckweight);
  }