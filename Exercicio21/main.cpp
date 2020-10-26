#include <iostream>
#include <stdlib.h>
#define MAX 10

using namespace std;

int insere_fila(int fila[], int *fim, int e);
int Remove_fila(int fila[], int*fim);
int imprime_fila(int fila[], int fim);





int main()
{
    int fila[MAX], fim, op,elemento, flag;
    fim=-1;
    do
    {
        system("cls");
        cout << "**** MENU****\n\n\n" << endl;
        cout<<"\n1 - Insere na fila";
        cout<<"\n2 - Remove da fila";
        cout<<"\n3 - Imprime fila";
        cout<<"\n9 - Sair\n";
        cout<<"\n    DIGITE A SUA OPCAO->";
        cin>>op;

        switch(op)

        {
        case 1 :
            system("cls") ;
            cout<<"****Insere na fila****\n\n\n";
            cout<<"Digite um numero inteiro para ser inserido na fila:";
            cin>>elemento;
            flag = insere_fila(fila,&fim,elemento);
            if(flag==0)

                cout<<"\n\nElemento inserido com sucesso!!!\n\n";

            else
                cout<<"\n\nImpossivel inserir...\nFila cheia!\n\n";
            system("pause");
            break;






        case 2 :
            system("cls") ;
            cout<<"****Remove da fila****\n\n\n";
            flag = Remove_fila(fila,&fim);
            if(flag==0)

                cout<<"\n\nElemento removido com sucesso com sucesso!!!\n\n";

            else
                cout<<"\n\nImpossivel remover...\nFila vazia!\n\n";
            system("pause");
            break;


        case 3 :
            system("cls") ;
            cout<<"****Fila****\n\n\n";
            flag = imprime_fila(fila,fim);
            if(flag !=0)
                cout<<"**** Fila vazia****\n\n";
                    system("pause");

            break;





        }


    }
    while(op!=9);

        return 0;
}

int insere_fila(int fila[], int *fim, int e)
{
    if (*fim<=(MAX-2))
    {
        *fim=*fim+1;
        fila[*fim]=e;
        return 0;

    }
    else
        return 1;
}

int Remove_fila(int fila [],int*fim)
{
    if(*fim>=0)
    {
        for (int i = 0; i<(*fim);i++)
            fila[i]=fila[i+1];
        *fim =*fim-1;
        return 0;
    }
    else
        return 1;
}

int imprime_fila(int fila[], int fim)

{
    if(fim<0)
        return 1;
    else
    {

        for(int i=0; i<=fim; i++)
            cout<<fila[i]<<" ";
        cout<<"\n\n\n";
        return 0;
    }
}
