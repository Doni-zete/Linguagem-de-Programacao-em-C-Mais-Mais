#include <iostream>
#define MAX 10
using namespace std;



int main()
{
    const int insere=1,mostra=2,calculaMedia=3,maiorTemperatura=4,menorTemperatura=5,Sair=6;
    int vet[MAX], i,soma;
    int vet2[MAX];
    float media;
    int escolhe;

    cout<<"\t\t\tMenu\n";

    cout<<"\n\t\t1-Insere temperaturas";
    cout<<"\n\t\t2-Mostra temperaturas";
    cout<<"\n\t\t3-Calcula média";
    cout<<"\n\t\t4-Calcula maior temperatura";
    cout<<"\n\t\t5-Calcula menor temperatura";
    cout<<"\n\t\t6-Sair\n\n";

    cout <<"\t\tEscolha um numero:" << endl;
    cin>>escolhe;
    while(escolhe==1)
    {



    for(i=0; i<MAX; i++)
    {
        cout << "\nEntre com uma temperatuta" << endl;
        cin>>vet[i];
    }

    for(i=0; i<MAX; i++)
        vet2[i]=vet[i];

    cout<<endl<<endl;

    cout<<"vet1\t\tvet2";
    for(i=0; i<MAX; i++)
        cout<<endl<<vet[i]<<"\t\t"<<vet2[i];


    for(i=0; i<MAX; i++)
        vet[i]=vet2[(MAX-1)-i];

    for(i=0; i<MAX; i++)
    {
        soma=soma+vet[i];
    }


    for(i=0; i<MAX; i++)
    {
        if(vet[i]>media)
        {
            media++;
            media=soma/(float)MAX;
        }
    }

    cout<<endl<<endl;

    cout<<"vet\t\tvet2";
    for(i=0; i<MAX; i++)

        cout<<endl<<vet[i]<<"\t\t"<<vet2[i]<<endl;
    cout<<"A media e:"<<media;
    return 0;

    }

    return 0;
}
