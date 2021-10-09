// Ejercicio 1 - Sumar 2 numeros y mostrar por stdout

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Ingrese un numero: \n");
  scanf("%d", &a);
  printf("Ingrese otro numero: \n");
  scanf("%d", &b);
  c = a + b;
  printf("La suma es: %d \n", c);
  return 1;
}
