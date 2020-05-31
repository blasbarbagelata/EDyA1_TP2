#include "itree.h"
#include <stdlib.h>
#include <stdio.h>

int main () {
  ITree arbol = itree_crear();
  double izquierdo, derecho;
  for (int i = 0; i < 5; ++i) {
    printf ("ingrese un intervalo:");
    scanf ("%lf, %lf", &izquierdo, &derecho);
    arbol = itree_insertar (arbol, izquierdo, derecho);
  }
  itree_recorrer_dfs (arbol);
  itree_destruir (arbol);
}