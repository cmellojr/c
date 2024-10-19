#include <stdio.h>

int main(void) {
  int *p;
  int y;
  int x=10;
  p = &x;
  y = *p; 
  printf("Resultado: %d\n", y);
}
