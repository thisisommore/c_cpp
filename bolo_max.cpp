#include <iostream>

class BoloMax {
public:
  BoloMax &operator<<(const char *str) {
    printf("Max is %s\n", str);
    return *this;
  }
};
int main() {
  BoloMax bolo_max;
  bolo_max << "Om";
}