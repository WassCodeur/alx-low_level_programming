#include <stdio.h>

typdef struct NODE{
  int value;
  struct NODE *next;
}, NODE;

int main(void){
  NODE * head, one, two, three;

  head->next = &one;
  one->value = 1;
  one->next = &two;

  two->value = 2;
  two->next = &three;

  three->value = 3;
  three->next = NULL;
return 0
}
