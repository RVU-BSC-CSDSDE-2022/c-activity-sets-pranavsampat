#include<stdio.h>
typedef struct Triangle{
float area;
float base;
float altitude;
}triangle;
triangle input_triangle();
void input_n_triangles(int n, triangle t[n]);
void find_area(triangle *t);
void find_n_areas(int n, triangle t[n]);
// Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, triangle t[n],triangle smallest);
int input_n(){
  int n;
  printf("enter number of triangles");
  scanf("%d",&n);
  return n;
}
triangle input_data(){
  triangle t;
  printf("enter base and height of triangle");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_data(int n,triangle t[n]){
  int i;
  for(i=0;i<n;i++){
    t[i]=input_data();
  }
}
void find_area(triangle *t){
  t->area=(0.5)*(t->base)*(t->altitude);
}
void find_n_areas(int n,triangle t[n]){
  int i;
  for(i=0;i<n;i++){
    find_area(&t[i].area);
  }
}
triangle smallest_area(int n,triangle t[n]){
triangle smallest={100,100,100};
  int i;
  for(i=0;i<n;i++){
    if(smallest.area<t[i].area){
      smallest.area=t[i].area;
    }
    }
    }
  
void output(int n,triangle t[n],triangle smallest){
  for(int i=0;i<n;i++){
    printf("base %f,altitude%f and area %f for triangle %d\n and smallest is %f",t[i].base,t[i].altitude,t[i].area,i+1,smallest.area);
  }
}
int main(){
  int n;
  n=input_n();
  triangle t[n];
  // input_data();
  input_n_data(n,t);
  triangle smallest;
  find_area(t);
  find_n_areas(n,t);
  smallest=smallest_area(n,t);
  output(n,t,smallest);
}