#include <stdio.h>
#include <string.h>
void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);
void input_string(char *a, char *b) {
  printf("enter string and substring");
  scanf("%s%s", a, b);
}
int sub_str_index(char *string, char *substring) {
  int index = -1;
  for (int i = 0; string[i] != '\0'; i++) {
    int j;
    for (j = 0; substring[j] != '\0' && string[i + j] == substring[j]; j++) {
    }
    if (substring[j] == '\0') {
      index = i; 
      break; 
    }
  }
  return index;
}

void output(char *string, char *substring, int index) {
  if(index==-1){
    printf("substring does not exist\n");
  }
    else{
      printf("the index of %s in %s is %d\n", substring, string, index);
    }
}
int main() {
  char a[100], b[100];
  int index;
  input_string(a, b);
  index = sub_str_index(a, b);
  output(a, b, index);
  return 0;
}
