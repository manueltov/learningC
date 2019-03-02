/*comentari
nif
*/

//bfb

#include <stdio.h>
#include <string.h>

#define MYNAME "ManuTov"

int globalVar = 1100;

int main(int argc, char const *argv[]) {
  char firstLe_tra = 'M';

  printf("\n");

  printf("Hello %c \n", firstLe_tra );

  int numero = 3;

  int *pt;

  pt = &numero;

  printf("%i\n", numero);
  
  return 0;
}
