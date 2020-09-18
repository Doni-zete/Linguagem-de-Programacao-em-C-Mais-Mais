#include <iostream>

using namespace std;

int main()
{
    int altura,base,area;
    cout<<"\t\t\tCalcular a area do triangulo\n\n"<<endl;
    cout <<"\tEntre com a Base do Triangulo" << endl;
    cin>>base;
    cout<<"\tEntre com a altura"<<endl;
    cin>>altura;
    area =base*altura;

    cout<<"A area do retangulo e:\n\n "<<area<<"m";
    return 0;
}
