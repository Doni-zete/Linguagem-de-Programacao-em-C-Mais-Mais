#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
      FILE *arquivo;
      arquivo =  fopen("Texto.txt","w");
      if (arquivo==NULL)
      {

        printf ("\nProblema ao abrir o arquivo\n\n");
        return 0;

      }
      fprintf (arquivo,"Donizete Crisostomo Barbosa\n Sertãozinho\n\n");

      fprintf(arquivo,"\nFeliz natal!!\n)

      fclose(arquivo);
    return 0;
}
