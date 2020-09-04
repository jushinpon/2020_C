#include <stdio.h>
int main(int argc, char *argv[]) {// argv[0] is the current code file name with the path
  
  for (int i = 0; i < argc; ++i) {
    printf("input number: %d, argv %s\n", i, argv[i]);
  }
  return 0;
}