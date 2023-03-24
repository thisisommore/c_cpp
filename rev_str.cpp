#include <iostream>
using namespace std;
void rev(string m);
int main() {
  string max = "max";
  rev(max);
  return 0;
}

void rev(string m) {
  string new_rev = "";
  char *p = &m[0];
  int len = 0;
  while (*p != '\0') {
    len++;
    p++;
  }

  cout << "Len is " << len << endl;
}