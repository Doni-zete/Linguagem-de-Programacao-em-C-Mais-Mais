#include<iostream>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

using namespace std;

int main()
{
    FILE *arquivo;
    int i;
    arquivo = fopen("texto.txt","r");
    if (arquivo==NULL)
    {
        printf("\nProblema ao abrir o arquivo\n\n");
        return 0;
    }
    char texto[2000];
    for (i=0; !feof(arquivo); i++)
        texto[i]=fgetc(arquivo);
    fclose(arquivo);
    printf("\n%s",texto);
    return 0;
}




