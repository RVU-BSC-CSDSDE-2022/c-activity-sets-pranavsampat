#include<stdio.h>
int input_num(){
int n;
printf("enter a number");
scanf("%d",&n);
  return n;
}
int is_composite(int n){
  int i,count;
  count=0;
  for(i=0;i<=n;i++){
    if(n%(i+1)==0){
      count=count+1;
    }
  }return count;
  }
void output(int n,int result){
  if(result>2){
    printf("%d is a composite number",n);
  }
  else if(result==2){
    printf("%d is a prime number",n);
  }
  else {
    printf("%d is neither prime nor composite",n);
  }
}
int main(){
  int x,result;
  x=input_num();
  result=is_composite(x);
  output(x,result);
}