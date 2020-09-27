#include <iostream>

using namespace std;

int main()
{
    float peso, maiorPeso,menorPeso,altura,menorAltura;
    float maiorAltura, mediaPesos,mediaAlturas,mediaImc,maiorImc,menorImc;
    char cadastrar='s';
    while (cadastrar=='s'){

    cout<<"Entre com o seu peso"<<endl;
    cin>>peso;
    cout<<"Entre com sua altura"<<endl;
    cin>>altura;



    cout << "Deseja cadastrar mais? (s SIM)ou (n NAO) " << endl;
    cin>>cadastrar;
    }
    return 0;
}
