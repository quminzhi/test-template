#include <stdio.h>
#include <comm.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int sig = 10;

  LOG("hello world %d\n", sig);
  INFO("hello world %d\n", sig);
  WARNING("hello world %d\n", sig);
  // ERROR(255, "hello world %d\n", sig);
  POSIX_ERROR("ls error", 2);

  return 0;
}
