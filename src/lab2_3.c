#include <stdio.h>

int is_prime(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2; i < n; i = i + 1) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;

  printf("Enter n: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("Invalid value.");
  } else {
    printf("Prime numbers up tp %d: ", n);
    for (int i = 2; i <= n; i = i + 1) {
      if (is_prime(i) == 1) {
        printf("%d ", i);
      }
    }
    printf("\n");
  }
  return 0;
}