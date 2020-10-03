#include <iostream>
#include <stdlib.h>
using namespace std;


int main()

{

    int vet[10], qde_par, acc_impar,maior_par, menor_impar;

    int i, cont;

    qde_par=0;
    acc_impar=0;

    for (i=0; i<10; i++)

    {

        cout << "\nDigite um numero: ";

        cin >> vet[i];

    }



    qde_par=0;

    for (i=0; i<10; i++)

        if (vet[i]%2==0)

            qde_par++;

    cout << "\n\nQuantidade de numeros pares: " << qde_par << "\n\n";



    acc_impar=0;

    for (i=0; i<10; i++)

        if (vet[i]%2!=0)

            acc_impar+=vet[i];

    cout << "\n\nA somatoria de numeros impares: " << acc_impar << "\n\n";

    cont=0;

    for(i=0; i<10; i++)

    {

        if (vet[i]%2==0)

        {

            cont++;

            if (cont==1)

                maior_par=vet[i];

            else

                if (vet[i]>maior_par)

                    maior_par=vet[i];

        }

    }



    cout << "\n\nMaior par: " << maior_par << "\n\n";





    cont=0;

    for(i=0; i<10; i++)

    {

        if (vet[i]%2!=0)

        {

            cont++;

            if (cont==1)

                menor_impar=vet[i];

            else

                if (vet[i]<menor_impar)

                    menor_impar=vet[i];

        }

    }



    cout << "\n\nMenor impar: " << menor_impar << "\n\n";



}
