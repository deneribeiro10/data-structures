#include <stdio.h>
#include "./lib/LinkedList.h"


typedef struct {
  char nome[10];
  double nota;
  int matricula;
} Complex;

typedef struct {
  int *fabio;
  Complex germano[17];
} Anything;


int main() {

  int a, b;

  LinkedList ll;
  linkedListInit(&ll, sizeof(Anything));

  Complex in;

  in.nota = 3.1415;

  Anything any;
  any.germano[0] = in;

  // int i;
  // for(i=0; i<10; i++)
    linkedListInsertAt(&ll, 0, &any);

  Anything t;
  linkedListAt(&ll, 0, &t);
  printf("%lf %lf\n", any.germano[0].nota, t.germano[0].nota);

  return 0;
}
