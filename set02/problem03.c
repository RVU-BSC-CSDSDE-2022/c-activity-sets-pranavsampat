#include<stdio.h>
#include<math.h>
struct Camel{
float radius;
float height;
float length;
float weight;
};
typedef struct Camel camel;
camel input(){
  camel n;
  printf("enter details for radius height and length\n");
  scanf("%f %f %f",&n.radius,&n.height,&n.length);
  return n;
}
float find_weight(camel c){
  c.weight= 3.14*c.radius* sqrt(c.height * c.length);
 return c.weight; 
}
void output(camel a,float y){
  printf("weight of camel having radius: %.1f length: %.1f and height: %.1f is %.2f",a.radius,a.length,a.height,y);
}
int main()
{
  camel a,c;
  float y;
a=input();
y=find_weight(a);
output(a,y); 
}