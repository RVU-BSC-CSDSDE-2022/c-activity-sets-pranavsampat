 #include<stdio.h>
void input_two_strings(char*string1,char*string2);
int stringcompare(char*string1,char*string2);
void output(char*string1,char*string2,int result);
int main()
{
  int res;
  char string1[100], string2[100];
  input_two_strings(string1, string2);
  res=stringcompare(string1,string2);
  output(string1,string2,res);
  return 0;
}
void input_two_strings(char *string1,char *string2)
{
  printf("enter,strings\n");
  scanf("%s %s",string1,string2);
}
int stringcompare(char*string1,char*string2)
{

  for(int i=0;i<100;i++){
  
  if(string1[i]>string2[i]){
   return 1;
  }
  else if (string2[i]>string1[i]){
     return 2;
    }
    else{
      return 3;
    }
  }
}
void output(char*string1,char*string2,int result)
{
  if(result==1){
    printf("the greatest is %s",string1);
  }
  else if (result==2){
    printf("the greatest is %s",string2);
  }
  else{
    printf("strings are equal");
  }
  }


