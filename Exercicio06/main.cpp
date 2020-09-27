#include <iostream>

using namespace std;

int main()
{
    int a, b,c;

    cout << "Entre com o valor de A:" << endl;
    cin>>a;
    cout<<"Entre com o valor de B:"<<endl;
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"O valor de A agora e "<<a<<endl;
    cout<<"O valor de B agora e: "<<b;

    return 0;
}
