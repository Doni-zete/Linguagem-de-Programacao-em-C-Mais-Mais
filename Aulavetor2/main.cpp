#include <iostream>
#define MAX 10
using namespace std;



int main()
{
    const int insere=1,mostra=2,calculaMedia=3,maiorTemperatura=4,menorTemperatura=5,sair=6;
    int vet[MAX], i,soma;
    int vet2[MAX];
    float media;
    int escolhe;
    int saida = 1;
    int maior;
    int menor;

    while(saida!=2)
    {
        cout<<"\t\t\tMenu\n";

        cout<<"\n\t\t1-Insere temperaturas";
        cout<<"\n\t\t2-Mostra temperaturas";
        cout<<"\n\t\t3-Calcula média";
        cout<<"\n\t\t4-Calcula maior temperatura";
        cout<<"\n\t\t5-Calcula menor temperatura";
        cout<<"\n\t\t6-Sair\n\n";


        cout <<"\t\tEscolha um numero:" << endl;
        cin>>escolhe;


        switch (escolhe)
        {
        case insere:
        {
            for(i=0; i<MAX; i++)
            {
                cout << "\nEntre com uma temperatuta" << endl;
                cin>>vet[i];
            }

            for(i=0; i<MAX; i++)
                vet2[i]=vet[i];

            cout<<endl<<endl;

            for(i=0; i<MAX; i++)
                vet[i]=vet2[(MAX-1)-i];

            for(i=0; i<MAX; i++)
            {
                if(vet[MAX]>media)
                {
                    media++;

                }
            }

            maior =vet[0];
            break;
        }

        case mostra:
        {

            cout<<"vet1\t\tvet2";
            for(i=0; i<MAX; i++)
                cout<<endl<<vet[i]<<"\t\t"<<vet2[i];
            cout<<endl<<endl;

            cout<<"vet\t\tvet2";
            for(i=0; i<MAX; i++)
                cout<<endl<<vet[i]<<"\t\t"<<vet2[i]<<endl;
            break;
        }

        case calculaMedia:
        {
            for(i=0; i<MAX; i++)
            {
                soma=soma+vet[i];
                media=soma/(float)MAX;
            }
             cout<<"A media e:"<<media;
            break;
        }

        case maiorTemperatura:
        {
            for(i=0; i<MAX; i++)
            {
                if(vet[i]>maior)
                {
                    maior=vet[i];
                }
            }
            cout<<"A maior temperatura e: "<<maior;
            cout<<endl<<endl;
            break;

        }
        case menorTemperatura:
        {
            for(i=0; i<MAX; i++)
            {
                if(vet[i]<menor)
                {
                    menor=vet[i];
                }
            }
            cout<<"A MENOR temperatura e: "<<menor;
            cout<<endl<<endl;
            break;
        }
        case sair:
        {
            saida =2;
            cout<<"Voce saiu";
            break;

        }
        }

    }
    return 0;
}
