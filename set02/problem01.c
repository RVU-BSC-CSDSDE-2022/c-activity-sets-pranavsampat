#include<stdio.h>
#include<math.h>
struct Point{
float x;
float y;
};
typedef struct Point point;
point input(){
  point n;
  printf("enter values of (x,y)");
    scanf("%f %f",&n.x,&n.y);
  return n;
}
int dist(point a,point b, float res)
{
  res=(a.x-b.x)+(a.y-b.y);
    return res;
}
void output(point a,point b,float res){
  printf("distance between(%1.f,%1.f) and(%1.f,%1.f) is %2.f",a.x,a.y,b.x,b.y,res);
}
int main(){
point a,b;
  float ans,c;
  a=input();
  b=input();
  ans=dist(a,b,c);
  output(a,b,ans);  
}