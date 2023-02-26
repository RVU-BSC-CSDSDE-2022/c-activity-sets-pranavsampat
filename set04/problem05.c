#include <stdio.h>
int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int input_array_size() {
  int n;
  printf("enter size");
  scanf("%d", &n);
  return n;
}
void init_array(int n, int a[n]) {
  for (int i = 0; i < n - 2; i++) {
    a[i] = i + 2;
  }
}
void erotosthenes_sieve(int n, int a[n]) {
  int count = 0;
  int j, k;
  for (j = 0; a[j] * a[j] < n; j++) {
    for (k = j + 1; k < n - 1; k++) {
      if (a[k] % a[j] == 0 && a[j] != 1) {
        a[k] = 1;
      }
    }
  }
}

void output(int n, int a[n]) {
  for (int i = 0; i < n - 2; i++) {
    if (a[i] != 1) {
      printf("%d ", a[i]);
    }
  }
}
int main() {
  int n = input_array_size();
  int a[n];
  init_array(n, a);
  erotosthenes_sieve(n, a);
  output(n, a);
  return 0;
}
