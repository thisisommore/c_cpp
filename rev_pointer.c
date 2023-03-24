#include <stdio.h>
void rev_str(char *str);
int main() {
  char str[] = "hello this is world";
  rev_str(str);
  return 0;
}

void rev_str(char *str) {
  int len = 0;
  while (*str) {
    len++;
    str++;
  }

  str--;
  char rev_str[len];
  int i = 0;
  for (; i < len; i++) {
    rev_str[i] = *(str--);
  }

  printf("rev is %s\n", rev_str);
}