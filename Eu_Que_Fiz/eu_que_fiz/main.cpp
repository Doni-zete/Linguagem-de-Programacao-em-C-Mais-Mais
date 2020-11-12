#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 10
using namespace std;

typedef struct
{
    int elementos[MAX];
    int topo;
    int quantidadeElemento=0;
} TPilha;

void push (TPilha *p, int n)
{
    p->topo=p->topo+1;
    p->elementos[p->topo]=n;
    p->quantidadeElemento=p->quantidadeElemento+1;

}

void mostraPilhaInvertida(TPilha *p)
{
    cout << "\n\nPilha invertida:\n";
    int i=0;
    while(i<p->quantidadeElemento)
        cout << p->elementos[i++] << "\n";
}

int main()
{
    TPilha p1;
    p1.topo=-1;
    int digita = 0, num=0;

    printf("Digite quantidade de numero para inserir na pilha: ");
    scanf("%d", &digita);

    while(digita--)
    {

        printf("Digite um numero: ");
        scanf("%d", &num);
        push(&p1, num);
    }

    cout << "\n\nPilha NAO invertida: \n";
    for(int i=p1.topo; i>=0; i--)
        cout << p1.elementos[i] << "\n";

    mostraPilhaInvertida(&p1);

    cout << "\n\n";
    return 0;
}
