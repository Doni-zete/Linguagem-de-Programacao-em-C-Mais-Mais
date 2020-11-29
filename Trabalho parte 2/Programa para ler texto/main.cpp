#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;


void criptografar(FILE *arquivo)
{

}

int main()
{
      FILE *arquivo;
      arquivo =  fopen("Texto.txt","w");
      if (arquivo==NULL)
      {
      fprintf << arquivo [0];
        printf ("\nProblema ao abrir o arquivo\n\n");
        return 0;

      }
      fprintf (arquivo,"Donizete Crisostomo Barbosa\n Sertãozinho\n\n");


      fclose(arquivo);
    return 0;
}




