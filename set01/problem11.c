#include<stdio.h>
  struct complexno{
  float real;
  float image;
  };
typedef struct complexno Complex;
Complex input_complex()
{
  Complex n;
   printf("enter real and image number");
  scanf("%f %f",&n.real,&n.image);
  return n;
}
Complex add_complex(Complex a,Complex b)
{
  Complex sum;
   sum.real=a.real+b.real;
   sum.image=a.image+b.image;
  return sum;
}
void output(Complex a,Complex b,Complex add,Complex sum){
  printf("%2.f+%2.fi+%2.f+%2.fi equals %2.f + %2.fi",a.real,a.image,b.real,b.image,sum.real,sum.image);
}

int main(){
  Complex a,b,c,add,sum;
a=input_complex();
b=input_complex();  
add=add_complex(a,b);
 output(a,b,sum,add);  
}
