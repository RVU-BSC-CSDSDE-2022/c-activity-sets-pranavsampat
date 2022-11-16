#include<stdio.h>
  struct complexno{
  float real;
  float image;
  };
typedef struct complexno Complex;
int get_n(){
  int n;
  printf("enter array size");
  scanf("%d",&n);
  return n;
}
Complex input_complex(Complex a[n])
{
  int i;
  i=0;
  for(i=0;i<n;i++){
    printf("enter real and image numbers");
    scanf("%f %f",&a[i].real,&a[i].image);
  }
}
Complex add(complex a[n]){
  int i;
  i-0;
  for(i=0;i<n;i++){
    add.real += a[i].real;
    add.image += a[i].image;      
  }
  return add;
}
void output(complex add)
{
  printf("the sum is %f",add);
}
int main(){
  int n;
  complex a[n];
   get_n();
 a=input_Complex(a[n]);
  y=add(a);
  output(y);
}