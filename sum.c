#include <stdio.h>
#include <pthread.h>

#define SIZE 1600000000
#define THREADS 16

int main(int argc, char *argv[]) {
  long sum = 0;
  for (int i = 0; i <= SIZE; i++) {
    sum += i;
  }

  printf("%ld\n", sum);
  
  return 0;
}