#include <iostream>
#define MAX 5

using namespace std;

int main()
{

    int pilha[MAX],topo,elemento,op,flag;
    topo=-1;
    do
    {
        system("cls");


        cout << "******MENU******\n\n\n" << endl;
        cout<<"\n1 - Push";
        cout<<"\n2 - Pop";
        cout<<"\n3 - Imprime pilha";
        cout<<"\n9 - Sair";
        cout<<"\n\n Digite sua opcao -> ";
        cin>>op;

        switch(op)
        {
        case 1 : system("cls");


                  cout<<"PUSH ";
                  cout<<"Digite o elemento a ser empilhado";
                  cin>>elemento;
                  flag =  push(pilha,&topo,elemento);
                  if(flag==0)
                  cout<<"\n\nElemento inseriod com sucesso!";
                  elsecout<<"\nn\Impossivel inserir..\nPilha cheia";
                  sytem("pause");

        }
    while(op!=9);
        return 0;
    }
