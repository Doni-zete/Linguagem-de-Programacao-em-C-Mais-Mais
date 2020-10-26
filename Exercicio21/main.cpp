#include <iostream>
#include <stdlib.h>
#define MAX 10

using namespace std;

int main()
{
    int fila[MAX], fim, op,elemento, flag,insere_fila;
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





        }


         {
        case 2 :
            system("cls") ;
            cout<<"****Remove da fila****\n\n\n";
            flag = Remove_fila(&fim);
            if(flag==0)

                cout<<"\n\nElemento removido com sucesso com sucesso!!!\n\n";

            else
                cout<<"\n\nImpossivel remover...\nFila vazia!\n\n";
            system("pause");
            break;





        }

    }
    while(op!=9)

        return 0;
}
