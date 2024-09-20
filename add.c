#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int output = atoi(argv[0]) + atoi(argv[1]);
  printf("%d", output);
  return 0;
}
