#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int cateto1,cateto2,hipotenusa;
    cout<<"\t\tCalcular a Hipotenusa do triangulo\n\n"<<endl;
    cout << "Entre com um cateto1" << endl;
    cin>>cateto1;
    cout<<"Entre com o cateto2"<<endl;
    cin>>cateto2;
    cout<<endl;
    cout <<"A hipotenusa e "<<sqrt(cateto1*cateto1+cateto2*cateto2);


    return 0;
}
