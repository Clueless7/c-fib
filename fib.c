#include <stdio.h>
#include <stdlib.h>

#define MAP_SIZE 100

unsigned long long map[MAP_SIZE];

void init_map() {
  for (int i = 0; i < MAP_SIZE; i++) {
    map[i] = -1;
  }
}

unsigned long long fib(unsigned long long n) {
  if (n <= 1) {
    return n;
  }

  if (map[n] != -1) {
    return map[n];
  }

  map[n] = fib(n - 1) + fib(n - 2);
  return map[n];
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s <n>\n", argv[0]);
    return -1;
  }

  init_map();

  long long result = fib(atoi(argv[1]));

  printf("%lld\n", result);

  return 0;
}
