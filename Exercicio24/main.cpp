#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 30



using namespace std;

int main()

{


 ​​

    char expressao[MAX];
    int tamanho;
    cout << "Digite um nome: ";
    fflush(stdin);
    gets(expressao);
    tamanho = strlen(expressao);
    cout << "\n\nTamanho: " << tamanho << "\n\n";
    cout << "\n\n" << expressao << "\n\n";



    for(int i=0; i<tamanho; i++)

        cout << expressao[i];



    cout << "\n\n";




}
}​​
