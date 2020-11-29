#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 30



using namespace std;

int main()

{

    char texto[MAX];
    int i,tamanho;
    cout << "Digite algo: ";
    cin>>texto;
    tamanho = strlen(texto);
    for(i=0;i<tamanho;i++)
      texto[i]=texto[i]+3;
    cout<<"\n\n"<<texto<<"\n\n";
    for(i=0;i<tamanho;i++)
    texto[i]=texto[i]-3;
    cout<<"\n\n"<<texto<<"\n\n";

return 0;

}
