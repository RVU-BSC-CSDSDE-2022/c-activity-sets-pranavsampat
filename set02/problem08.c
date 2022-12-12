#include<stdio.h>
#include<math.h>
struct Camel{
float height;
float length;
float radius;
float weight;
};
typedef struct Camel camel;
void input(int n,camel c[n],float *truckweight){
  int i;
  for(i=0;i<n;i++){
  printf("enter radius,length,height of camel  %d\n",i+1);
  scanf("%f %f %f",&c[i].radius,&c[i].length,&c[i].height);    
}i++;
  printf("enter truck weight");
  scanf("%f",truckweight);
  }
void find_camel_weight(int n, camel c[n]){
  int i;
  // c[n].weight=0;
  for(i=0;i<n;i++){
    c[i].weight= 3.14*c[i].radius* sqrt(c[i].height*c[i].length);
    // c[i].weight +=c[i].weight+c[n].weight;
  }
}
float compute_total_weight(int n, camel c[n], float truckweight){
  float total_weight;
  float camelweight;
  int i;
  camel sum={0,0,0,0};
  for(i=0;i<n;i++){
    sum.weight=sum.weight+c[i].weight; 
  }i++;
  total_weight=truckweight+sum.weight;
    // total_weight=truckweight+c[i].weight;
  return total_weight;
}
void output(float totalweight)
{
  // // //   printf("the height is %.2f,length is %.2f, and radius is %.2f ",a[i].radius,a[i].length,a[i].height);
  // // // }
  printf("weight is %f",totalweight);
  // printf("the truck weight is %.2f",truckweight);
}
int main()
  {
     int x;
      printf("enter number of camels");
scanf("%d",&x);
float truckweight;camel a[x];float totalweight;
input(x,a,&truckweight);
    find_camel_weight(x,a);
  totalweight=compute_total_weight(x,a,truckweight);  
    output(totalweight);
  }
  