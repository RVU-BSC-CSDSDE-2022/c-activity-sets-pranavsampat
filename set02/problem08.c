#include<stdio.h>
struct Camel{
float radius,height,weight,length;
}
typedef struct Camel camel;
void input(int n,camel c[n],float *truck weight){
  int i;
  i=0;
printf("enter number of camels");
scanf("d",&n);
  for(i=0;i<n;i++){
  printf("height of camel %d",c[i]);
  scanf("%d",&c[i].height);
  printf("length of camel %d",c[i]);
  scanf("%d",&c[i].length);
  printf("radius of length %d",c[i]);
  scanf("%d",&c[i].radius);
    }i++
printf("enter weight");
scanf("%f",truck weight);}    
int main()
  {
    int x;
camel a[x]
float truck weight;
input(x,a,&truck weight);
    printf("%d %f %f",x,a,truck weight);
  }