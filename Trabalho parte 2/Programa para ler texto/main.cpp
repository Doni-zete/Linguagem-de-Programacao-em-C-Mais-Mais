#include <iostream>

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
      fprintf (arquivo,"Donizete Crisostomo Barbosa\n Sert�ozinho")
    return 0;
}
