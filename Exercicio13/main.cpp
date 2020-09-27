#include <iostream>

using namespace std;

int main()
{
    float peso,altura,imc;
    int cont=0,adicionaPeso=0,adicionaAltura=0,adicionaImc=0;
    float maiorPeso=-99999, maiorAltura=-99999,maiorImc=-99999;
    float menorPeso=99999,menorAltura=99999,menorImc=99999;
    char cadastrar='s';

    while (cadastrar=='s')
    {

        cout<<"Entre com o seu peso"<<endl;
        cin>>peso;
        cout<<endl;
        cout<<"Entre com sua altura"<<endl;
        cin>>altura;
        cout<<endl<<endl;
        adicionaPeso+=peso;
        adicionaAltura+=altura;
        cont++;
        imc=peso/(altura*altura);
        adicionaImc+=imc;

        if(peso>maiorPeso)
        {
            maiorPeso=peso;
        }
        if(peso<menorPeso)
        {
            menorPeso=peso;
        }
        if(altura<menorAltura)
        {
            menorAltura=altura;
        }
        if(altura>maiorAltura)
        {
            maiorAltura=altura;
        }
        if(imc> maiorImc)
        {
            maiorImc=imc;
        }
        if(imc<menorImc)
        {
            menorImc=imc;
        }




        cout <<"\tDeseja cadastrar mais? (s SIM)ou (n NAO) " << endl;
        cin>>cadastrar;
        cout<<endl;
    }
    cout<<"\nO maior peso e: "<<maiorPeso<<endl;
    cout<<"\nO menor peso e: "<<menorPeso<<endl;

    return 0;
}
