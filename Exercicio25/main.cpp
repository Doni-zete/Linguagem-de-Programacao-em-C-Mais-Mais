#include <stdio.h>
#include <stdlib.h>
#define MAX 10


typedef struct pilha {
     int elem[MAX];
     int topo;
} TPilha;


void pop (TPilha *p)
{
    if (p->topo>=0)
    {
        p->topo=p->topo-1;
        printf("\nElemento removido\n");
        system("pause");
    }

    else {
       printf("\nPilha vazia\nImpossivel remover\n");
       system("pause");
    }
}

void push (TPilha *p, int e)
{
    if (p->topo<(MAX-1))
    {
        p->topo=p->topo+1;
        p->elem[p->topo]=e;
        printf("\nElemento Inserido\n");

    }
    else
        printf("\nImpossivel Inserir\nPilha Cheia\n");


  system("pause");
}


void mostrar (TPilha *p)
{
    int i;
    system("cls");
    printf("* * * *   P I L H A   * * * *\n\n");
    for(i=(p->topo);i>=0;i--)
        printf("\n%d",p->elem[i]);
    printf("\n\n\n");
    system("pause");
}



int main()
{
  TPilha p1;
  p1.topo=-1;
  int op, elemento;
  do
  {
     printf("* * * *   M E N U   * * * *\n\n");
     printf("\n1 - PUSH");
     printf("\n2 - POP");
     printf("\n3 - MOSTRAR");
     printf("\n9 - SAIR");
     printf("\n\nDigite a sua opcao: ");
     scanf("%d",&op);

     switch(op)
     {
         case 1 : system("cls");
                  printf("Digite o elemento: ");
                  scanf("%d",&elemento);
                  push(&p1,elemento);
                  break;

        case 2  : system("cls");
                  pop(&p1);
                  break;

        case 3  : mostrar(&p1);
                  break;
     }

  } while(op!=9);



return 0;


}





