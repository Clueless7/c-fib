#include <stdio.h>
#include <stdlib.h>

long int fib(long int n) {
  if (n <= 1) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}

int main(int argc, char* argv[]) {
  long int result = fib(atoi(argv[1]));

  printf("%ld\n", result);

  return 0;
}

