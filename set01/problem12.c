#include<stdio.h>
  struct complexno{
  float real;
  float image;
  };
typedef struct complexno Complex;
void input_complex(int n,Complex a[n]);
Complex add(int n,Complex a[n]);
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
  Complex sum={0,0};

  for(i=0;i<n;i++){
    sum.real=a[i].real+sum.real;
    sum.image = a[i].image+sum.image;
  }
  return sum;
}
void output(int n,Complex a[n],Complex add)
{int i;
  i=0;
  for(i=0;i<n;i++){
 printf("%2.f+%2.fi+",a[i].real,a[i].image);
};
  printf("=%2.f+%2.fi",add.real,add.image);
  }
int main(){
  int n;
  n=get_n();
  Complex a[n],y;    
 input_complex(n,a);
  y=add(n,a);
  output(n,a,y);
}