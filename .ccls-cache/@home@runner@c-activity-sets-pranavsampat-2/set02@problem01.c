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
  res=sqrt(pow((b.x-a.x),2)+pow((b.y-a.y),2));
    return res;
}
void output(point a,point b,float res){
  printf("distance between(%.1f,%.1f) and(%.1f,%.1f) is %.1f",a.x,a.y,b.x,b.y,res);
}
int main(){
point a,b;
  float ans,c;
  a=input();
  b=input();
  ans=dist(a,b,c);
  output(a,b,ans);  
}