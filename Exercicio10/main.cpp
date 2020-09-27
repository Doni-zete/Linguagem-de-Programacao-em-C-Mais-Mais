#include <iostream>

using namespace std;

int main()
{
    float distribuidor,imposto,custoFabrica,calculo,totalConsumidor;
    cout << "Entre com o calor do carro" << endl;
    cin>>custoFabrica;

    distribuidor= custoFabrica*28/100;
    imposto= custoFabrica*45/100;
    totalConsumidor= custoFabrica+distribuidor+imposto;

    cout<<"O valor para o consumidor final e "<<totalConsumidor;


    return 0;
}
