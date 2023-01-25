#include<stdio.h>
void input_string(char *string1, char *string2);
int compare(char *string1, char *string2);
void output(char *string1, char  *string2, int result);
void input_string(char *string1,char *string2){
  printf("enter the first string");
  scanf("%s",string1);
  printf("enter the second string");
  scanf("%s",string2);
}
int compare(char *string1,char *string2){
  int i;
  int x;
  for(i=0;string1[i]!='\0';i++){
     if(string1[i]>string2[i]){
     x=1;
}
      else if(string2[i]>string1[i]){
        x=2;
    }
        else if(string2[i]==string1[i]){
          x=3;
}
    }
  return x;
}
void output(char *string1,char *string2,int x){
if(x==1){
  printf("%s is greater than %s",string1,string2);
}
else if(x==2){
    printf("%s is greater than %s",string2,string1);
}
else if(x==3){
      printf("strings are equal");

} 
  }
int main(){
char string1[100],string2[100];
int result;
input_string(string1,string2);
result=compare(string1,string2);
output(string1,string2,result);
return 0;
}

