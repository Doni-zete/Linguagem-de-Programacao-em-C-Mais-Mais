#include <iostream>

using namespace std;

int main()
{
    int num1,num2, resultado,guarda;

    cout<<"Entre com um numero: ";
    cin>>num1;
    cout<<"Entre com outro numero: ";
    cin>>num2;

    resultado=num1+num2;
    guarda=resultado*num1;


    cout << "O resultado  e: "<<guarda << endl;
    return 0;
}
