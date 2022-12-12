#include<stdio.h>

void input(float *base, float *height){
  printf("enter base and height of triangle");
scanf("%f %f",base,height);
}
void find_area(float base , float height, float *area){
  *area=(0.5)*base*height;
}
void output(float x, float y, float area){
  printf("base %f height %f gives area %f",x,y,area);
}
int main(){
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
}
  