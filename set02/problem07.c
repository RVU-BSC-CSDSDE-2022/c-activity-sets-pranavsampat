
#include <stdio.h>
#include<ctype.h>
#include <string.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);
void input(char *name) 
{
  printf("enter name");
  scanf("%s", name);
}
int has_nice_name(char *c) 
{
  int count, ans, i, consonant, result;
  char C;
  consonant = 0;
  i = 0;
  count = 0;
  while (c[i] != '\0'){
      C= tolower(c[i]);
        if (C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u') 
        {
            count++;
        } 
          else if (C != 'a' && C!= 'e' && C != 'i' && C!= 'o' && C!= 'u') 
        {
              consonant++;
        }
        i++;
    }
  if (count >= 2 && consonant >= 2) 
  {
    result = 1;
  }
  return result;
}
void output(int res) 
{
  if (res == 1) 
  {
    printf("The camel has a nice name");
  } else 
  {
    printf("The camel does not have not a nice name");
  }
}
int main() 
{
  char name[100];
  int x;
  input(name);
  x = has_nice_name(name);
  output(x);
}