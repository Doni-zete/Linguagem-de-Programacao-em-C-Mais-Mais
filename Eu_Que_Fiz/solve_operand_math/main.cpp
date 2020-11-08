#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#define MAX 300
#define COLCHETE_ABRE '['
#define COLCHETE_FECHA ']'
#define PARENTES_ABRE '('
#define PARENTES_FECHA ')'

using namespace std;

typedef struct pilha {
     char elem[MAX];
     char topo;
     int len = 0;
} TPilha;


void pop (TPilha *p)
{
    if (p->len>=0)
    {
        p->elem[(p->len) - 1]= '\0';
        p->len=p->len - 1;
        printf("\nElemento removido\n");
    }

    else {
       printf("\nPilha vazia\nImpossivel remover\n");
       system("pause");
    }
}

void push (TPilha *p, char e)
{
    if (p->len < (MAX-1))
    {
        p->elem[p->len]=e;
        p->len=p->len + 1;


    }
    else {
        printf("\nImpossivel Inserir\nPilha Cheia\n");
        system("pause");
    }


}

int strLength(char *arr) {
  int length = 0;
  while(*arr++ != '\0') {
    length++;
  }

  return length;
}

void mostrar (TPilha *p)
{
    system("cls");
    printf("* * * *   P I L H A   * * * *\n\n");
    for(int i=(p->len) - 2; i < (p->len); i++)
        printf("%c",p->elem[i]);
    printf("\n\n");
}


int main()
{
  TPilha p1;

  char operation[MAX];

  scanf("%s", &operation);
  int length = strLength(operation);


  for(int i=0; i<length; i++){

    if(operation[i] == COLCHETE_ABRE){
      push(&p1, operation[i]);
    } else if(operation[i] == COLCHETE_FECHA) {
      push(&p1, operation[i]);
      mostrar(&p1);
      printf("\n");
      pop(&p1);
      pop(&p1);
      system("pause");
    }

    if(operation[i] == PARENTES_ABRE){
      push(&p1, operation[i]);
    } else if(operation[i] == PARENTES_FECHA) {
      push(&p1, operation[i]);
      mostrar(&p1);
      printf("\n");
      pop(&p1);
      pop(&p1);
      system("pause");
    }

  }

  int tam = p1.len;

  if(tam == 0){
    printf("\n\n===== Parentese e colchetes estao combinando =====\n\n");
  } else {
    printf("Parenteses ou colchetes nao estao combinando\n");
  }

return 0;


}





