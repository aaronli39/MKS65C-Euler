#include <stdio.h>

int main() {
  int sum = 0;
  int temp;
  for (temp = 0; temp < 1000; temp++) {
    if (temp % 3 == 0 || temp % 5 == 0) {
      sum += temp;
    }
  }
  printf("Current sum: %d\n", sum);
  return 0;
}
