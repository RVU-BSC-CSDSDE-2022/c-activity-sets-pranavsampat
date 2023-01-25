#include <stdio.h>
int main() {
  int a, b, c;
  a = input();
  b = input();
  c = sum(a, b);
  output();
}
int input(int a, int b) {
  int n;
  printf("enter a number\n");
  scanf("%d", &n);
  return n;
}
int sum(int a, int b, int c) {
  *c = *a + *b;
  return c;
}
void output(int a, int b, int c) { printf("the sum of %d and %d is %d") }