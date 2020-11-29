#include<iostream>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;

int main()
{
    //Quantidade de caracter e as variaveis de entrada
    char textoDigitado[1000],textoCarregado[5000];
    int i,tamanho,op,arquivo;

    do
    {
        //Menu de opçoes
        system("cls");
        cout << "\t* * * * *   M E N U    * * * * *\n\n\n";
        cout << "\n1 - DIGITE SEU TEXTO";
        cout << "\n2 - CARREGAR SEU TEXTO";
        cout << "\n3 - CRIPTOGRAFAR";
        cout << "\n4 - DESCRIPTOGRAFAR";
        cout << "\n9 - SAIR: ";
        cout<<"\n\nDIGITE UMA  OPCAO: ";
        cin >> op;

        //switch case para escolha da opção
        switch (op)
        {
        //variavel de entrada para palavras
        case 1 :
            system("cls");
            cout << "Digite seu texto:" << endl;
            cin>>textoDigitado;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;


            system("pause");
            break;

        case 2:

            system("cls");
            //declaracão varialve do tipo ponteiro
            FILE *arquivo;
            //retorna arquivo
            arquivo = fopen("texto.txt","r");
            //null quando o arquivo nao foi aberto
            if (arquivo==NULL)
            {
                printf("\nProblema ao abrir o arquivo\n\n");

                return 0;
            }
            //pegando os caracteres lidos no textos pegando caracter por caracter
            char textoCarregado[5000];
            for (i=0; !feof(arquivo); i++)
                textoCarregado[i]=fgetc(arquivo);
            fclose(arquivo);
            printf("\n%s",textoCarregado);
            system("pause");


            break;

        case 3 :
            system("cls");
            cout << "CRIPTOGRAFAR\n\n\n";
            //retorna um inteiro o comprimento da string
            tamanho = strlen(textoCarregado);
            for(i=0; i<tamanho; i++)
                textoCarregado[i]=textoCarregado[i]+3;
                    cout <<"\n\n"<<textoCarregado << "\n\n\n\n";




            tamanho = strlen(textoDigitado);
            for(i=0; i<tamanho; i++)

                textoDigitado[i]=textoDigitado[i]+3;

            cout<<"\n\n"<<textoDigitado<<"\n\n\n";

            cout << "\n\nTexto criptografado  com sucesso!!\n\n";

            system("pause");
            break;

        case 4:
            system("cls");
            cout<<"DESCRIPTOGRAFADO\n\n";
            tamanho = strlen(textoCarregado);
            for (i=0; i<tamanho; i++)

                textoCarregado[i]=textoCarregado[i]-3;
            cout<<"\n\n"<<textoCarregado<<"\n\n";



            tamanho = strlen(textoDigitado);
            for (i=0; i<tamanho; i++)
                textoDigitado[i]=textoDigitado[i]-3;
            cout <<"\n\n"<<textoDigitado<<"\n\n";
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

