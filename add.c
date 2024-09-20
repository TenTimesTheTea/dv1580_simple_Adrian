#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int output = atoi(argv[1]) + atoi(argv[2]);
  printf("%d", output);
  return 0;
}
