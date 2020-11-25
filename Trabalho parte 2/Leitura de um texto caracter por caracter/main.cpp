#include <iostream>
#include<stdio.h>
#include<stdlib.h>


using namespace std;



int main()
{
  FILE*arquivo;
  int i;
  arquivo =fopen("texto.txt","r");
  if(arquivo==NULL)
  {

    printf("\nProblema ao abrir o arquivo\n\n");
    return 0;

  }




  char textto[1000];
  for (i=0;!feof(arquivo);i++)
    texto[i]= fgetc(arquivo);
    printf("%c",texto [i]);
    for (intj=0;j<=1000000;j++);

  return 0 ;


    return 0;
}
