#include <iostream>

int main() {
  int max[] = {1, 3, 4, 2};

  int *m = max;

  while (m < max + 4) {
    printf("%d\n", *m++);
  }
  return 0;
}