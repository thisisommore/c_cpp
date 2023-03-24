#include <stdio.h>

int main() {
  char str[] = "max";
  char new[40];

  char *pointer = &str[0];
  while (*pointer) {
    printf("%c\n", *pointer);
    pointer++;
  }
  return 0;
}
