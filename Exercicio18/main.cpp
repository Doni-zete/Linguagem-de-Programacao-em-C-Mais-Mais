#include <iostream>
#include<stdlib.h>

using namespace std;

void tela(void);
int cubo(int x)
{

    return x*x*x;
}

void troca (int x, int y)
{
    int aux;
    aux=x;
    x=y;
    y=aux;
     cout << "\nx=" <<x <<"\ny="<<y<<"\n\n";
}

int main()
{
    int a=4,b=5;
    troca (a,b);
    cout << "\na=" <<a <<"\nb="<<b<<"\n\n";
    return 0;
}
