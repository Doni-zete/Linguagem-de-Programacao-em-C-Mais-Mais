#include <iostream>

using namespace std;

int main()
{
    int a;
    int b=5;
    int *p1;
    a=2;
    cout << "a=" <<a<<"\n\nQue esta na posicao de memoria: "<<&a<< "\n\n";
    p1=&a;
    cout << "\na=" <<*p1<<"\n\nQue esta na posicao de memoria: "<<p1<< "\n\n";
    *p1=7;
    cout<<"\n\nValor de a: "<<a<<endl;

    cout<<"\n\n"<<&p1<<"\n\n";
    p1++;

    cout<<"\n\n"<<*p1<<"\nQue esta na posicao de memoria: "<<p1<<"\n\n";

    return  0;
}
