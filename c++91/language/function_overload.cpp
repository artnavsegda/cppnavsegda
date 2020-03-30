#include <stdio.h>

void print(int i) {
  printf("Here is int %d\n", i);
}
void print(double  f) {
  printf(" Here is float %f\n", f);
}
void print(char const *c) {
  printf("Here is char* %s\n");
}

int main() {
  print(10);
  print(10.10);
  print("ten");
  return 0;
}
