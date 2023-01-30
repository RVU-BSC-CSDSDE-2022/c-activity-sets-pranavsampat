#include <string.h>
#include <stdio.h>
void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);
void input_string(char *a)
{
  printf("enter string");
  scanf("%[^\n]s",a);
}
int count_words(char *a)
{
  int count;
  char *token;
  count=0;
  token=strtok(a," ");
  while(token!=NULL)
  {
    count++;
    token=strtok(NULL," ");
  }
  return count;
}
void output(char *a,int no_words)
{
  printf("the words in %s is %d\n",a,no_words);
}
int main()
{
  char a[100];
  int x;
  input_string(a);
  x=count_words(a);
  output(a,x);
}