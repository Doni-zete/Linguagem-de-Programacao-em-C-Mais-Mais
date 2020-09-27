#include <iostream>

using namespace std;

int main()
{

    float ajuste,aumento,salario;
    cout << "Entre com seu salario" << endl;
    cin>>salario;

    ajuste=salario*22/100;
    aumento =salario+ajuste;

    cout<<"O seu novo salario e: "<<aumento<<endl;

    return 0;
}
