#include <iostream>
#include<stdlib.h>

using namespace std;



void troca (int *x, int *y)
{
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
    cout << "\nx=" <<*x <<"\ny="<<*y<<"\n\n";
}

int main()
{
    int a=4,b=5;
    cout << "\na=" <<a <<"\nb="<<b<<"\n\n";
    troca (&a,&b);
    cout << "\na=" <<a <<"\nb="<<b<<"\n\n";
    return 0;
}



