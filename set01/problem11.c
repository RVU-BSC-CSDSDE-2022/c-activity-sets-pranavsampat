#include<stdio.h>
 struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
  Complex input_complex(){
Complex num;
printf("enter numbers");
scanf("%f %f",&num.real,&num.imaginary);
return num;
}
 Complex add_complex(Complex a,Complex b){
Complex sum={0,0};
sum.real=a.real+b.real;
sum.imaginary=a.imaginary+b.imaginary;
return sum;
}
void output(Complex a,Complex b,Complex sum){
printf("the sum of %1.f+%1.fi and %1.f+%1.fi is %1.f+%1.fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main(){
Complex a,b,add;
a=input_complex();
b=input_complex();
add=add_complex(a,b);
output(a,b,add);
return 0;
}
