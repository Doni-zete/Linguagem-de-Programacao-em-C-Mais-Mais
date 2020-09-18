#include <iostream>

using namespace std;

int main()
{
    int cateto1,cateto2,hipotenusa;
    cout<<"\t\tCalcular a Hipotenusa do triangulo\n\n"<<endl;
    cout << "Entre com um cateto1" << endl;
    cin>>cateto1;
    cout<<"Entre com o cateto2"<<endl;
    cin>>cateto2;

    hipotenusa=(cateto1*cateto1)+(cateto2*cateto2);

    cout<<"A hipotenusa e: "<<hipotenusa;

    return 0;
}
