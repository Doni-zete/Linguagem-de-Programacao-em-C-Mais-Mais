#include <iostream>
#define MAX 10

using namespace std;

int main()
{
    int vet[MAX],i;
    int par[MAX],impar[MAX];
    int contarPar = 0;
    int contarImpar = 0;
    int soma=0;

    for(i=0; i<MAX; i++)
    {
        cout<<"Entre com um"<<i<< "numero\n\n";
        cin>>vet[i];
    }
    for(i =0; i<MAX; i++)
    {
        if(vet[i]%2)
        {

            impar[contarImpar]=vet[i];
            contarImpar++;

        }
        else;
        {
            par[contarPar] =vet[i];
            contarPar++;
        }
    }
    soma=contarImpar+contarImpar;

    for(i=0; i<MAX; i++)
    {
        cout<<"Todos os numeros"<<i<<vet[i]<<endl;
    }

    for(i=0; i<contarPar; i++)
    {
        cout<<"numeros pares"<<par[i]<<endl;
    }

    for(i=0; i<contarImpar; i++)
    {
        cout<<"numeros pares"<<impar[i]<<endl;
    }

    return 0;
}
