#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int input(){
int n;
printf("enter number");
scanf("%d",&n);
return n;
}
void compare(int a,int b,int c,int *largest){
if((a>=b) && (a>=c)){
  *largest=a;
}
else if((b>=a) && (b>=c)){
    *largest=b; 
 }
else if ((c>=a) && (c>=b)){
      *largest=c;
}
}
void output(int a,int b,int c,int largest){
printf("the largest of %d,%d and %d is %d",a,b,c,largest);
}
int main(){
int a,b,c,largest;
a=input();
b=input();
c=input();
compare(a,b,c,&largest);
output(a,b,c,largest);
return 0;
}
