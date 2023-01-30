#include<stdio.h>
#include<string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);
void input_string(char* a,char* b)
{
  printf("enter strings");
  scanf("%s %s",a,b);
}
int sub_str_index(char* string, char* substring)
{
  int i,j;
  int index;
for(i=0;string[i]!='\0';i++)
{
  if(string[i]==substring[0]&&string[i+strlen(substring)-1]==substring[strlen(substring)-1]){
    index=i;
  break;
  }
  }
  return index;
    }

  
  
void output(char *string,char *substring,int index)
{
  printf("index of %s in %s is %d",substring,string,index);
}
int main()
{
  char a[100],b[100];
  int index;
  input_string(a,b);
  index=sub_str_index(a,b);
  output(a,b,index);
  return 0;
}