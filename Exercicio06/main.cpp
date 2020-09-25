#include <iostream>

using namespace std;

int main()
{
    int idade, totaldias,mes,dia,ano;

    cout << "Entre com sua idade" << endl;
    cin>>idade;
    cout<<"Entre com mes"<<endl;
    cin>>mes;
    cout<<"Entre com o dia"<<endl;
    cin>>dia;

    totaldias=totaldias+(idade*365);
    totaldias=totaldias+(mes*30);
    totaldias=totaldias+dia;

    cout<<"OS dias"<<totaldias;




    return 0;
}
