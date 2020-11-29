#include<iostream>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

using namespace std;

int main()
{
    char texto[30];
    int i,tamanho,op;

    do
    {
        system("cls");
        cout << "\t* * * * *   M E N U    * * * * *\n\n\n";
        cout << "\n1 - DIGITE SEU TEXTO";
        cout << "\n2 - CARREGAR SEU TEXTO";
        cout << "\n3 - CRIPTOGRAFAR";
        cout << "\n4 - DESCRIPTOGRAFAR";
        cout << "\n9 - SAIR: ";
        cout<<"\n\nDIGITE UMA  OPCAO: ";
        cin >> op;

        switch (op)
        {
        case 1 :
            system("cls");
            cout << "Digite seu texto:" << endl;
            cin>>texto;

            system("pause");
            break;

        case 3 :
            system("cls");
            cout << "CRIPTOGRAFAR\n\n\n";
            tamanho = strlen(texto);
            for(i=0; i<tamanho; i++)
                texto[i]=texto[i]+3;
            cout <<"\n\n"<<texto << "\n\n";
            system("pause");
            break;

        case 4:
            system("cls");
            cout<<"DESCRIPTOGRAFADO\n\n";
            for (i=0; i<tamanho; i++)
                texto[i]=texto[i]-3;
            cout <<"\n\n"<<texto<<"\n\n";
            system("pause");



            break;




        }

    }
    while(op!=9);
    return 0;
}













//
//
//
//
//
//        do
//        {
//            cout << "Digite seu texto:" << endl;
//            cin>>texto;
//            tamanho = strlen(texto);
//            for(i=0; i<tamanho; i++)
//                texto[i]=texto[i]+3;
//            cout <<"\n\n"<<texto << "\n\n";
//            for (i=0; i<tamanho; i++)
//                texto[i]=texto[i]-3;
//            cout <<"\n\n"<<texto<<"\n\n";
//
//            switch(op)
//            {
//            case 1 :
//                system("cls");
//                printf("DIGITAR TEXTO: ");
//                scanf("%d",&texto);
// system("pause");
//                break;
//
//            case 2  :
//                system("cls");
//                printf("CARREGAR SEU TEXTO: ");
//                 system("pause");
//                break;
//
//
//
//            }
//            while (op!=9);
//
//        }
//
//    return 0;
//}

