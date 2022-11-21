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
void input_complex(int n,Complex a[n])
{
  int i;
  i=0;
  for(i=0;i<n;i++){
    printf("enter real and image numbers");
    scanf("%f %f",&a[i].real,&a[i].image);
  }
}
Complex add(int n,Complex a[n]){
  int i;
  i=0;
  struct complexno sum={0,0};

  for(i=0;i<n;i++){
    sum.real=a[i].real+sum.real;
    sum.image = a[i].image+sum.image;
    return sum;
  }
}
void output(Complex add)
{
  printf("the sum is %fi",add);
}
int main(){
  int n;
  Complex a[n],y;
   n=get_n();  
 input_complex(n,a);
  y=add(n,a);
  output(y);
}