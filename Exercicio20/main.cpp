#include <iostream>
#define MAX 5

using namespace std;

int push (int p[],int*t,int e)
{
    if(*t>(MAX-2))
        return 1;
    else
    {
        *t= *t+1;
        p[*t]=0;
        return 0;
    }
}
 void imprime(int p[],int t)
 {
     cout<<"\t\tPilha\n";
     for(int i=t;i>=0;i--)
        cout <<"\t\t" <<p[i]<<"\n";
     cout<<"\n\n";
 }


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
                  else
                    cout<<"\n\nImpossivel inserir..\nPilha cheia";
                  system("pause");
                  break;

                  case 3: system("pause");
                  cout<<"*********IMPRIME PILHA*******\n\n\n";
                  imprime(pilha,topo);
                  system("pause");
                  break;
        }

        }
    while(op!=9);
    }
        return 0;
    }

