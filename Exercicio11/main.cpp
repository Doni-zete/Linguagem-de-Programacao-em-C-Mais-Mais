#include <iostream>

using namespace std;

int main()
{
    float nota,media;
    float cont=0;
    float acumuloNota=0;

    char continuar='s';


    while(continuar=='s')
    {

        cout << "Entre com uma nota" << endl;
        cout<<endl;
        cin>>nota;
        cont++;
        acumuloNota+=nota;

        media=acumuloNota/cont;

        cout<<"Deseja cadastrar mais notas (S Sim)ou (N Nao): "<<endl;
        cin>>continuar;

    }

    cout<<"\n\nA media das notas digitadas e "<<media <<endl;
    return 0;
}
