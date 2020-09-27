#include <iostream>

using namespace std;

int main()
{
    float peso,altura,imc,mediaAltura,mediaPeso,mediaImc;
    int cont=0,adicionaPeso=0,adicionaAltura=0,adicionaImc=0;
    float maiorPeso=-99999, maiorAltura=-99999,maiorImc=-99999;
    float menorPeso=99999,menorAltura=99999,menorImc=99999;
    char cadastrar='s';

    while ((cadastrar=='s')||(cadastrar=='S'))
    {

        cout<<"\nEntre com o seu PESO"<<endl;
        cin>>peso;

        cout<<"\nEntre com sua ALTURA"<<endl;
        cin>>altura;

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

        mediaAltura=adicionaAltura/cont;
        mediaImc=adicionaImc/cont;
        mediaPeso=adicionaPeso/cont;
    }
    cout<<"\nO maior PESO e: "<<maiorPeso<<endl;
    cout<<"\nO menor PESO e: "<<menorPeso<<endl;
    cout<<"\nA maior ALTURA e: "<<maiorAltura<<endl;
    cout<<"\nA menor ALTURA e: "<<menorAltura<<endl;
    cout<<"\nO maior Imc e: "<<maiorImc<<endl;
    cout<<"\nO menor Imc e: "<<menorImc<<endl;
    cout<<"\nA media das ALTURA e: "<<mediaAltura<<endl;
    cout<<"\nA media dos PESOS e: "<<mediaPeso<<endl;
    cout<<"\nA media dos IMC e: "<<mediaImc<<endl;

    if (mediaImc<18.5)

        cout<<"\nABAIXO DO PESO\n";

    else

        if((mediaImc>=18.5)&& (mediaImc<24.9))
            cout<<("\nPESO IDEAL\n");

        else

            if((mediaImc>=24.9)&& (mediaImc<29.9))
                cout<<"\nSOBRE PESO\n";

            else
                cout<<"\nOBESIDADE";

    return 0;
}
