#include <stdio.h>

int main() {
  int ans = 1;
  int state = 0;
  while (state == 0) {
    int i;
    for (i = 1; i <= 20; i++) {
      if (ans % i != 0) {
        ans += 1;
        break;
      }
      else if (ans % i == 0 && i == 20) {
        state += 1;
      }
    }
  }
  printf("Answer: %d\n", ans);
  return 0;
}
