#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b;
  int resultado;
  printf ("Digite um valor para a: ");
  scanf ("%d", &a);
  printf ("Digite um valor para b: ");
  scanf ("%d", &b);
  resultado = a + b;
  printf ("O resultado da soma: %d\n", resultado);
  return 0;
}
