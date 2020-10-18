#include <iostream>
#define MAX 5

using namespace std;

int main()
{

    int pilha[MAX],topo,elemento,op,flag;
    topo=-1;
    do{
        system("cls");


    cout << "******MENU******\n\n\n" << endl;
    cout<<"\n1 - Push";
    cout<<"\n2 - Pop";
    cout<<"\n3 - Imprime pilha";
    cout<<"\n9 - Sair";
    cout<<"\n\n Digite sua opcao -> ";
    cin>>op;

    }while(op!=9);
    return 0;
}
