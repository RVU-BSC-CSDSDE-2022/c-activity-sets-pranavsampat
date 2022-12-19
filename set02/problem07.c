
#include<stdio.h>
#include<string.h>
void input(char *name);
 int has_nice_name(char *c);
 void output(int res);
int main(){
  char name[100];
  int res;
input(name);
  res= has_nice_name(name);
  output(res); 
}
void input(char *name){
  printf("enter name");
  scanf("%s",name);
}
 int has_nice_name(char *c){
   int count,ans,i,x;
   i=0;
   count=0;
   while(c[i]!='\0')
   {
  if(c[i]=='a'||c[i]=='e' ||c[i]=='i'||c[i]=='o'||c[i]=='u')
  {
       count++;
  }i++;
     }return count;
       }
void output(int res){
  if(res>=2){
    printf("%d its a nice name",res);
  }
  else{
    printf("its not a nice name");
}}
