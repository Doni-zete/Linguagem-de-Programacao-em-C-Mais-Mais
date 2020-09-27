#include <iostream>

using namespace std;

int main()
{
    int maior=-99999;
    int menor= 99999;
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
        cout<<endl;
        cin>>continuar;

        if(nota>maior)
        {
            maior=nota;
        }
        if(nota<menor)
        {
            menor=nota;

        }

    }

    cout<<"\n\nA media das notas digitadas e "<<media <<endl;
    cout<<"A menor nota e: "<<menor<<endl;
    cout<<"A maiot nota e:"<<maior<<endl;
    return 0;
}
