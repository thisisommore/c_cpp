#include <stdio.h>

int main() {
  char str[] = "max";
  char new[4];

  int j = 2;
  for (int i = 0; i <= 2; i++) {
    new[i] = str[j];
    j--;
  }
  printf("ori %s\n", str);
  printf("rev %s\n", new);
  return 0;
}