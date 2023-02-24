#include <stdio.h>

struct Node{
  int a;
  struct Node *s_next;
};

typedef struct Node s_node;
s_node s0, S1, s2, *debut, *temp;

int main(void)
{
  debut = &s2;
  debut->a = 3;
  debut->s_next = NULL;

  temp = &S1;
  temp->a = 2;
  temp->s_next = debut;
  debut = temp;

temp = &s0;
temp->a = 5;
temp->s_next = debut;
debut = temp;

s_node *p_s = debut;
do{
printf("%d\n", p_s->a);
p_s = p_s->s_next;
 }while(p_s->s_next != NULL);
 printf("%d\n", p_s->a);
printf("fin list merci !!!\n");

return 0;
}
