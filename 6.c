#include <stdio.h>

int main() {
  unsigned long sumSq = 0;
  unsigned long sum = 0;
  int i;

  for (i = 1; i <= 100; i++) {
    sumSq += (i * i);
    sum += i;
} unsigned long sqSum = sum * sum;
  printf("Sum of squares: %lu\nSquare of sums: %lu\ndifference: abs(%lu)\n", sumSq, sqSum, (sumSq - sqSum));
  return 0;
}
